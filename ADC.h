/*
 * ADC.h
 *
 * Created: 8/21/2021 9:17:47 PM
 *  Author: Osama Kamal
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "ADC_Configuration.h"

void ADC_Initialize(void);

uint16_t ADC_Read(uint8_t ADC_Channel);


#endif /* ADC_H_ */
