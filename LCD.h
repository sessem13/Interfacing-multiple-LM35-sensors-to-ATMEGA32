/*
 * LCD.h
 *
 * Created: 8/14/2021 7:09:50 PM
 *  Author: 20100
 */ 


#ifndef LCD_H_
#define LCD_H_

/*
What should i write here!
1- Macros
2- User defined data types (Structure - Union - Enumeration)
3- Global variables (if Exist)
4- Functions prototypes
*/

#include "LCD_Configuration.h"
//#include "DIO.h"
/*
LCD Commands:
https://embeddedcenter.wordpress.com/ece-study-centre/display-module/lcd-16x2-lm016l/
*/
// function prototypes for LCD Module:
void LCD_Init(void);               /*Initialize LCD*/
void LCD_WRITE_CMD(uint8_t cmd);   /*Write command inside control register*/
void LCD_WRITE_DTA(uint8_t dta);   /*write data inside data register*/
void LCD_WRITE_STR(uint8_t* str);  /*write string on screen*/
void LCD_WRITE_NBR(uint32_t numbr);/*write number on screen*/
void LCD_CLEAR(void);              /*Clear data display on screen*/




#endif /* LCD_H_ */