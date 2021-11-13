/*
 * ADC_Configuration.h
 *
 * Created: 8/21/2021 9:17:37 PM
 *  Author: Osama Kamal
 */ 

/*
ADC (Analog to Digital converter) is the most widely used device in embedded systems which is designed especially for data acquisition.
In the AVR ATmega series normally 10-bit ADC is inbuilt in the controller.
ATmega16/32 supports eight ADC channels, which means we can connect eight analog inputs at a time. 
ADC channel 0 to channel 7 are present on PORTA. i.e. Pin no.33 to 40.
-----------------------------------------------------------------------
The controller has 10 bit ADC, which means we will get digital output 0 to 1023.
i.e. When the input is 0V, the digital output will be 0V & when input is 5V (and Vref=5V), 
we will get the highest digital output corresponding to 1023 steps, which is 5V.
So controller ADC has 1023 steps and:
Step size with Vref=5V :  5/1023 = 4.88 mV.
Step size with Vref=2.56 :  2.56/1023 = 2.5 mV.
So Digital data output will be Dout = Vin / step size.
--------------------------------------------------------------------
ATmega16/32 ADC
It is 10-bit ADC Converted output binary data is held in two special functions 8-bit register ADCL (result Low) and ADCH (result in High).
ADC gives 10-bit output, so (ADCH: ADCL) only 10-bits are useful out of 16-bits.
We have options to use this 10-bits as upper bits or lower bits.
We also have three options for Vref. 1. AVcc (analog Vcc), 2. Internal 2.56 v3. External Aref. Pin.
The total conversion time depends on crystal frequency and ADPS0: 2 (frequency devisor)
If you decided to use AVcc or Vref pin as ADC voltage reference, 
you can make it more stable and increase the precision of ADC by connecting a capacitor between that pin and GND.
---------------------------------------------------------------------------
We can select input channel ADC0 to ADC7 by using these bits. These bits are also used to select comparator (inbuilt in AVR) inputs with various gain.
Selecting a channel is very easy, just put the channel number in MUX4 : 0.
Suppose you are connecting the input to ADC channel 2 then put 00010 in MUX4 : 0.
Suppose you are connecting the input to ADC channel 5 then put 00101 in MUX4 : 0.
*/

#ifndef ADC_CONFIGURATION_H_
#define ADC_CONFIGURATION_H_

#include "ADC_Address.h"

//Voltage reference: defined by bits 7,6 of ADMUX register [REFS1:REFS0].
#define ADC_AVCC     0		//[REFS1:REFS0 = 01]
#define ADC_AREF     1		//[REFS1:REFS0 = 00]
#define ADC_Internal 2		//[REFS1:REFS0 = 11]

//Status for voltage reference
#define ADC_Vref ADC_AVCC

//ADC read adjust: Choose if we will work on Left Adjust or Right Adjust.
//Use 10-bits output as upper bits or lower bits in ADCH & ADCL.
// if [ADLAR bit = 0 -->> use Right Adjust], if [ADLAR bit = 1 -->> use Left Adjust].
#define Left_Adjust		1
#define Right_Adjust	0

//Status for ADC Read Adjust:
#define ADC_Adjust	Right_Adjust

//Selecting a channel is very easy, just put the channel number in MUX4 : 0
//We have 8 channels: [MUX4:MUX3:MUX2:MUX1:MUX0] FOR SINGLE ENDED OUTPUT ONLY
/*
#define ADC0	0	// MUX4:MUX0 = 0b00000 Channel #1
#define ADC1	1	// MUX4:MUX0 = 0b00001 Channel #2
#define ADC2	2	// MUX4:MUX0 = 0b00010 Channel #3
#define ADC3	3	// MUX4:MUX0 = 0b00011 Channel #4
#define ADC4	4	// MUX4:MUX0 = 0b00100 Channel #5
#define ADC5	5	// MUX4:MUX0 = 0b00101 Channel #6
#define ADC6	6	// MUX4:MUX0 = 0b00110 Channel #7
#define ADC7	7	// MUX4:MUX0 = 0b00111 Channel #8
*/
//Status of Channel Selection:
//#define ADC_Channel ADC2
#endif /* ADC_CONFIGURATION_H_ */
