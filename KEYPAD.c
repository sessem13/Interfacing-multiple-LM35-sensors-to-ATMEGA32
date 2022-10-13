/*
 * KEYPAD.c
 *
 * Created: 8/15/2021 11:29:23 PM
 *  Author: 20100
 */ 

#include "KEYPAD.h"

//Creating an array of 4x4 with symbols representing what should each key of the kepad print:

const uint8_t KEYPAD[4][4] =
{
	{'C','0','=','+'},
	{'1','2','3','-'},
	{'4','5','6','*'},
	{'7','8','9','/'}
};

/*Initialize keypad*/

void KEYPAD_Init(void)
{
	//initializing 4 pins of PORTD as outputs using SetPinDirection function:
	//----------------------------------------------------------------------
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN0, KEYPAD_OUTPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN1, KEYPAD_OUTPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN2, KEYPAD_OUTPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN3, KEYPAD_OUTPUT);
	
	//initializing 4 pins of PORTD as inputs using SetPinDirection function:
	//----------------------------------------------------------------------
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN0, KEYPAD_INPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN1, KEYPAD_INPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN2, KEYPAD_INPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN3, KEYPAD_INPUT);
	
	// activating internal pullup resistors using SetPin_PullUp function:
	//--------------------------------------------------------------------
	DIO_SetPin_PullUp(KEYPAD_PORT, KEYPAD_INP_PIN0);
	DIO_SetPin_PullUp(KEYPAD_PORT, KEYPAD_INP_PIN1);
	DIO_SetPin_PullUp(KEYPAD_PORT, KEYPAD_INP_PIN2);
	DIO_SetPin_PullUp(KEYPAD_PORT, KEYPAD_INP_PIN3);
	
	//initialize all output pins to high:
	//----------------------------------
	DIO_SetPin_State(KEYPAD_PORT, KEYPAD_OUT_PIN0, KEYPAD_HIGH);
	DIO_SetPin_State(KEYPAD_PORT, KEYPAD_OUT_PIN1, KEYPAD_HIGH);
	DIO_SetPin_State(KEYPAD_PORT, KEYPAD_OUT_PIN2, KEYPAD_HIGH);
	DIO_SetPin_State(KEYPAD_PORT, KEYPAD_OUT_PIN3, KEYPAD_HIGH);
}


/*Read keypad value*/
uint8_t KEYPAD_READ(void)
{
	
	uint8_t LOC_COL = 0; /*Counter for columns*/
	uint8_t LOC_ROW = 0; /*Counter for rows*/
	uint8_t temp = 0;    /*To get reading from keypad*/
	uint8_t val = 0;     /*To check value inside array 2D*/
	for(LOC_COL = COL_INIT; LOC_COL <= COL_FINAL; LOC_COL++)
	{
		DIO_SetPin_State(KEYPAD_PORT, LOC_COL, KEYPAD_LOW);
		for (LOC_ROW = ROW_INIT; LOC_ROW <= ROW_FINAL; LOC_ROW++)
		{
			temp = DIO_GetPin_State(KEYPAD_PORT, LOC_ROW);
			if(temp == 0)/*Active LOW*/
			{
				val = KEYPAD[LOC_ROW - ROW_INIT][LOC_COL - COL_INIT];
				//De-bounce code block:
				while (temp == 0)
				{
					temp = DIO_GetPin_State(KEYPAD_PORT, LOC_ROW);
				}
				_delay_ms(10);
			}
		}
		DIO_SetPin_State(KEYPAD_PORT, LOC_COL, KEYPAD_HIGH);
	}
	return val;
}

