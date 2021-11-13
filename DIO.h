/*
 * DIO.h
 *
 * Created: 8/13/2021 6:42:43 PM
 *  Author: 20100
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_Configuration.h"

//define direction for pin (input or output)
void DIO_SetPin_Direction(DIO_Port port, DIO_Pin pin, DIO_Direction direction);
//------------------------------------------------

//in case of initializing as output:
void DIO_SetPin_State(DIO_Port port, DIO_Pin pin, DIO_State state);
void DIO_TglPin_State(DIO_Port port, DIO_Pin pin);
//---------------------------------------------------

//in case of initializing as input:
uint8_t DIO_GetPin_State(DIO_Port port, DIO_Pin pin);
void DIO_SetPin_PullUp(DIO_Port port, DIO_Pin pin);



#endif /* DIO_H_ */