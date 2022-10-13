/*
 * KEYPAD_Configuration.h
 *
 * Created: 8/14/2021 10:26:05 PM
 *  Author: 20100
 */ 


#ifndef KEYPAD_CONFIGURATION_H_
#define KEYPAD_CONFIGURATION_H_

#include "CPU_Configuration.h"

// renaming port
//---------------
#define KEYPAD_PORT PORTD

// renaming pins
//--------------
//keypad output pins:
#define KEYPAD_OUT_PIN0		DIO_PIN0
#define KEYPAD_OUT_PIN1		DIO_PIN1
#define KEYPAD_OUT_PIN2		DIO_PIN2
#define KEYPAD_OUT_PIN3		DIO_PIN3
//keypad input pins:
#define KEYPAD_INP_PIN0		DIO_PIN4
#define KEYPAD_INP_PIN1		DIO_PIN5
#define KEYPAD_INP_PIN2		DIO_PIN6
#define KEYPAD_INP_PIN3		DIO_PIN7

// renaming state:
//------------------
//keypad state:
#define KEYPAD_INPUT		DIO_INPUT
#define KEYPAD_OUTPUT		DIO_OUTPUT
//High and Low states:
#define KEYPAD_HIGH			DIO_HIGH
#define KEYPAD_LOW			DIO_LOW
//start and end of column pins:
#define COL_INIT			0
#define COL_FINAL			3
//start and end of row pins:
#define ROW_INIT			4
#define ROW_FINAL			7


#endif /* KEYPAD_CONFIGURATION_H_ */