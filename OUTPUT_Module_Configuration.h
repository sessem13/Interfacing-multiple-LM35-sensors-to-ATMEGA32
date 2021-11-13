/*
 * OUTPUT_Module_Configuration.h
 *
 * Created: 8/7/2021 10:19:44 PM
 *  Author: karim
 */ 


#ifndef OUTPUT_MODULE_CONFIGURATION_H_
#define OUTPUT_MODULE_CONFIGURATION_H_

#include "CPU_Configuration.h"

//Define pins for modules
//------------LED0-Definitions---------------------------------
#define LED0_DDR	DDRC
#define LED0_PRT	PORTC
#define LED0		PC2
//------------LED1-Definitions----------------------------//
#define LED1_DDR	DDRC
#define LED1_PRT	PORTC
#define LED1		PC7
//-------------LED2-Definitions---------------------------//
#define LED2_DDR	DDRD
#define LED2_PRT	PORTD
#define LED2		PD3
//-------------Buzzer-Definition---------------------------//
#define BUZZER_DDR  DDRA
#define BUZZER_PRT  PORTA
#define BUZZER	    PA3
//-------------Relay-Definition---------------------------//
#define RLY_DDR		DDRA
#define RLY_PRT		PORTA
#define RLY			PA2
//---------------------------------------------------------//
#define LED_OUTPUT 1
#define LED_HIGH  1
#define LED_LOW   0

#define RELAY_OUTPUT 1
#define RELAY_HIGH  1
#define RELAY_LOW   0

#define BUZZER_OUTPUT 1
#define BUZZER_HIGH  1
#define BUZZER_LOW   0




#endif /* OUTPUT_MODULE_CONFIGURATION_H_ */