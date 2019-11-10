/*

 * ADCmain.c
 *
 *  Created on: Oct 30, 2019
 *      Author: Eng Ali Gamal

#include "LIB/std_types.h"
#include "MCAL/DIO/inc/DIO.h"
#include "HAL/LCD/inc/HAL_lcd.h"
#include "HAL/LED/inc/HAL_LED.h"
#include "MCAL/ADC/ADC.h"

void main(void){
	u16 value = 0;
	initLed(LED0);
	initLed(LED1);
	initLed(LED2);
	LCD_init();
	ADC_init();
	while (1) {
		if (ADC_OK == ADC_u8StartConversion(ADC_u8_CHANNEL_1, &value)) {
			LCD_clearScreen();
			LCD_displayInteger(value);
		}
		switch (value) {
		case 20:
			turnOnLed(LED0);
			turnOffLed(LED1);
			turnOffLed(LED2);
			break;
		case 31:
			turnOnLed(LED0);
			turnOnLed(LED1);
			turnOffLed(LED2);
			break;
		case 41:
			turnOffLed(LED0);
			turnOnLed(LED1);
			turnOnLed(LED2);
			break;
		case 51:
			turnOffLed(LED0);
			turnOffLed(LED1);
			turnOnLed(LED2);
			break;
		default:
			turnOffLed(LED0);
			turnOffLed(LED1);
			turnOffLed(LED2);
			break;
		}
	}

}

*/
