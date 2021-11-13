/*
 * OUTPUT_Module.c
 *
 * Created: 8/7/2021 10:20:07 PM
 *  Author: karim
 */ 


#include "OUTPUT_Module.h"
/*
void LED0_Initialize(void)
{
	//Define direction as output
	SET_BIT(LED0_DDR, LED0);
}
void LED0_ON(void)
{
	SET_BIT(LED0_PRT, LED0);
}
void LED0_OFF(void)
{
	CLR_BIT(LED0_PRT, LED0);
}
void LED0_Toggle(void)
{
	TGL_BIT(LED0_PRT, LED0);
}
*/


void LED0_Initialize(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(LED0_DDR, LED0); // another way to express by more readable code
}

void LED0_ON(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(LED0_PRT, LED0); // another way to express by more readable code
}

void LED0_OFF(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	CLR_BIT(LED0_PRT, LED0); // another way to express by more readable code
}

void LED0_Toggle(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	TGL_BIT(LED0_PRT, LED0); // another way to express by more readable code
}

//-------------------------------------------//


void LED1_Initialize(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(LED1_DDR, LED1); // another way to express by more readable code
}

void LED1_ON(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(LED1_PRT, LED1); // another way to express by more readable code
}

void LED1_OFF(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	CLR_BIT(LED1_PRT, LED1); // another way to express by more readable code
}

void LED1_Toggle(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	TGL_BIT(LED1_PRT, LED1); // another way to express by more readable code
}

//----------------------------------------------//

void LED2_Initialize(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(LED2_DDR, LED2); // another way to express by more readable code
}

void LED2_ON(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(LED2_PRT, LED2); // another way to express by more readable code
}

void LED2_OFF(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	CLR_BIT(LED2_PRT, LED2); // another way to express by more readable code
}

void LED2_Toggle(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	TGL_BIT(LED2_PRT, LED2); // another way to express by more readable code
}

//---------------------------------------------//


void BUZZER_Initialize(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(BUZZER_DDR, BUZZER); // another way to express by more readable code
}

void BUZZER_ON(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(BUZZER_PRT, BUZZER); // another way to express by more readable code
}

void BUZZER_OFF(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	CLR_BIT(BUZZER_PRT, BUZZER); // another way to express by more readable code
}

void BUZZER_Toggle(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	TGL_BIT(BUZZER_PRT, BUZZER); // another way to express by more readable code
}

//-----------------------------------------------//


void RLY_Initialize(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(RLY_DDR, RLY); // another way to express by more readable code
}

void RLY_ON(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	SET_BIT(RLY_PRT, RLY); // another way to express by more readable code
}

void RLY_OFF(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	CLR_BIT(RLY_PRT, RLY); // another way to express by more readable code
}

void RLY_Toggle(void)
{
	//define direction as output:
	//LED0 = pin assigned to LED0 defined as PC2
	//LED0_PRT is defined as PORTC and PORTC is defined by dereferncing the hex address accessible by user:
	TGL_BIT(RLY_PRT, RLY); // another way to express by more readable code
}

//-----------------------------------------------//