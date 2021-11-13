/*
 * DIO_Configuration.h
 *
 * Created: 8/13/2021 6:42:20 PM
 *  Author: Osama Kamal
 */ 


#ifndef DIO_CONFIGURATION_H_
#define DIO_CONFIGURATION_H_

#include "CPU_Configuration.h"
//renaming ports by creating new user defined data type:
typedef enum
{
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}DIO_Port;

//renaming pins by creating new user defined data types
typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
}DIO_Pin;

//renaming directions by creating new user defined data types:
typedef enum
{
	DIO_INPUT = 0,
	DIO_OUTPUT = 1
}DIO_Direction;

//renaming states by creating new user defined data types:
typedef enum
{
	DIO_LOW = 0,
	DIO_HIGH = 1
}DIO_State;




#endif /* DIO_CONFIGURATION_H_ */
