/*
 * CPU_Configuration.h
 *
 * Created: 8/7/2021 10:22:26 PM
 *  Author: 20100
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU								//undefine internal oscillator
#define F_CPU 16000000					//Define external oscillator UL unsigned Long
#include <avr/io.h>							//define Input/Output for this MC
#include <avr/interrupt.h>					//defined interrupts for AVR controller
#include <util/delay.h>						//defined built-in delay functions
#include "BIT_MATH.h"
#include "DIO.h"
#endif /* CPU_CONFIGURATION_H_ */