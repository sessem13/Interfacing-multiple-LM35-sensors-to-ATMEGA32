/*
* ADC.c
*
* Created: 8/21/2021 9:17:59 PM
*  Author: Osama Kamal
*/
#include "ADC.h"

void ADC_Initialize(void)
{
	//Voltage reference
	#if ADC_Vref == ADC_AREF
	CLR_BIT(ADMUX, REFS1);CLR_BIT(ADMUX, REFS0);
	#elif ADC_Vref == ADC_AVCC
	CLR_BIT(ADMUX, REFS1);SET_BIT(ADMUX, REFS0);
	#elif ADC_Vref == ADC_Internal
	SET_BIT(ADMUX, REFS1);SET_BIT(ADMUX, REFS0);
	#endif
	//ADC read adjust, Choose right adjust
	CLR_BIT(ADMUX, ADLAR); //ADLAR = 0
	
	//Select channel-1
	/*
	// will try to move this to the read function to have channel as input to the function
	#if ADC_Channel == ADC0
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00000
	
	#elif ADC_Channel == ADC1
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00001
	
	#elif ADC_Channel == ADC2
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00010
	
	#elif ADC_Channel == ADC3
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00011
	
	#elif ADC_Channel == ADC4
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00100
	
	#elif ADC_Channel == ADC5
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00101
	
	#elif ADC_Channel == ADC6
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00110
	
	#elif ADC_Channel == ADC7
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00111
	#endif
	//CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00001
	*/
	//channel 0:

	//ADC Auto trigger enable:
	/*
	Bit 7:5 – ADTS2:0: ADC Auto Trigger Source
	If ADATE in ADCSRA is written to one, the value of these bits selects which source will
	trigger an ADC conversion. If ADATE is cleared, the ADTS2:0 settings will have no
	effect. A conversion will be triggered by the rising edge of the selected Interrupt Flag.
	Note that switching from a trigger source that is cleared to a trigger source that is set,
	will generate a positive edge on the trigger signal. If ADEN in ADCSRA is set, this will
	start a conversion. Switching to Free Running mode (ADTS[2:0]=0) will not cause a trigger
	event, even if the ADC Interrupt Flag is set.
	*/
	SET_BIT(ADCSRA, ADATE);
	//Prescaler
	SET_BIT(ADCSRA, ADPS2);SET_BIT(ADCSRA, ADPS1);SET_BIT(ADCSRA, ADPS0); //0b111
	//ADC enable
	//ADEN – Set this to 1 to enable ADC:
	SET_BIT(ADCSRA, ADEN);
}


uint16_t ADC_Read(uint8_t ADC_Channel)
{
	//select channel:
	//Idea came from here:
	//https://embedds.com/adc-on-atmega328-part-1/
	//--------------------------------------------------//
	switch(ADC_Channel)
	{
		case 0:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00000
		break;
		
		case 1:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00001
		break;
		
		case 2:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00010
		break;
		
		case 3:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00011
		break;
		
		case 4:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00100
		break;
		
		case 5:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00101
		break;
		
		case 6:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);CLR_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00110
		break;
		
		case 7:
		CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);SET_BIT(ADMUX, MUX2);SET_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0); //MUX4:MUX0 = 0b00111
		break;
	}
	uint16_t var = 0;//Create variable to read value 
	/*
	ADSC – We need to set this to one whenever we need adc to do a conversion.
	ADIF – This is the interrupt bit this is set to 1 by the hardware when conversion is complete.
	So we can wait till conversion is complete by polling this bit like:
	//Wait for conversion to complete
	while(!(ADCSRA & (1<<ADIF)));
	The loop does nothing while ADIF is set to 0, it exits as soon as ADIF is set to one, i.e. conversion is complete.
	*/
	SET_BIT(ADCSRA, ADSC); //Start of conversion
	while(GET_BIT(ADCSRA, ADIF) != 1); //Wait until conversion finish like a waiting loop
	var = ADC_DTA;//Read from output register
	return var;//return value
}
