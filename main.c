/*
 * Multiple_Analog_Inputs.c
 *
 * Created: 11/2/2021 7:56:30 PM
 * Author : 20100
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "ADC.h"
#include "LCD.h"

int main(void)
{
	uint16_t temp = 0;
	uint16_t converted_temp = 0;
	uint16_t celsius = 0;
	uint8_t SensorID = 0; //channel selection variable
	ADC_Initialize();
	LCD_Init();
	LCD_CLEAR();
    /* Replace with your application code */
    while (1) 
    {
		for (SensorID = 0; SensorID < 5; SensorID++)
		{
			temp = ADC_Read(SensorID);
			converted_temp = temp * 4.88 ;
			celsius = converted_temp / 10 ;
			LCD_CLEAR();
			LCD_WRITE_CMD(0X80);
			LCD_WRITE_NBR(celsius);
			_delay_ms(100);
		}		
    }
}

