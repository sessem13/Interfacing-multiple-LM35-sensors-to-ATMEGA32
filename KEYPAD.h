/*
 * KEYPAD.h
 *
 * Created: 8/14/2021 10:39:04 PM
 *  Author: 20100
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "KEYPAD_Configuration.h"

//Functions prototypes:
//---------------------

void KEYPAD_Init(void);/*Initialize keypad*/

uint8_t KEYPAD_READ(void);/*Read keypad value*/




#endif /* KEYPAD_H_ */