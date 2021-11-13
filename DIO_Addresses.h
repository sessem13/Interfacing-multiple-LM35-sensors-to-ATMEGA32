/*
 * Register_Address_Summary.h
 *
 * Created: 8/7/2021 10:32:03 PM
 *  Author: karim
 */ 


#ifndef REGISTER_ADDRESS_SUMMARY_H_
#define REGISTER_ADDRESS_SUMMARY_H_

/*Define registers for peripheral used*/
//---------------------------------------//
#define PORTA (*(volatile uint8_t*)(0x3B))		//output register for port A
#define DDRA  (*(volatile uint8_t*)(0x3A))		//data direction register for port A
#define PINA  (*(volatile uint8_t*)(0x39))		//input register for port A
//----------------------------------------//
#define PORTB (*(volatile uint8_t*)(0x38))		//output register for port B
#define DDRB  (*(volatile uint8_t*)(0x37))		//data direction register for port B
#define PINB  (*(volatile uint8_t*)(0x36))		//input register for port B
//---------------------------------------//
#define PORTC (*(volatile uint8_t*)(0x35))		//output register for port C
#define DDRC  (*(volatile uint8_t*)(0x34))		//data direction register for port C
#define PINC  (*(volatile uint8_t*)(0x33))		//input register for port C
//-----------------------------------------//
#define PORTD (*(volatile uint8_t*)(0x32))		//output register for port D
#define DDRD  (*(volatile uint8_t*)(0x31))		//data direction register for port D
#define PIND  (*(volatile uint8_t*)(0x30))		//input register for port D
//------------------------------------------//


#endif /* REGISTER_ADDRESS_SUMMARY_H_ */