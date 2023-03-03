// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>
#include <string.h>

// GLOBAL VARIABLES ----------------------------------------------------------|


// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY
struct age_data
{
	uint8_t date; //collect day/date of the month
	uint8_t month; //collect month number
	uint16_t year; //collect year of birth
	uint8_t age; //collect age
}my_age;

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
    my_age.date = 20; //collect day/date of the month
    my_age.month = 05; //collect month number
    my_age.year = 2000; //collect year of birth
    my_age.age = 22; //collect age

	while(1)
	{
		char str[100];
		for (uint8_t i=0; i<=my_age.age; i++)
		{
			sprintf(str,"%d",i); //change number into string
			lcd_putstring(str); //display string number of lcd
			delay(250000); //allow the string number to be view
			lcd_command(CLEAR); //remove string number and start again
		}
	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|



