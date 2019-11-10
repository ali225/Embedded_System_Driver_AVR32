/*


 * LCDmain.c
 *
 *  Created on: Oct 24, 2019
 *      Author: Eng Ali Gamal


#include "LIB/std_types.h"
#include"LIB/bit_math.h"
#include"LIB/registers.h"
#include "HAL/LCD/inc/HAL_lcd.h"
#include "util/delay.h"

int main() {

	stdReturnType_t status;

	char st[] = {'E', 'N','g','/' ,'A', 'i', 'L', '\0' };
	char arr[] = {"Eng Ali gamal aziz "};
	status = LCD_init();
	status |= LCD_displayString_rowCol(arr,1,3);
	status |=LCD_clearScreen();
	status |=LCD_displayString_rowCol(st,0,2);
	_delay_ms(1000);
	status |=LCD_clearScreen();
	return 0;
}

*/
