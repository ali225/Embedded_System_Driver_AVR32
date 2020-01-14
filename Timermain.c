/*

 * Timermain.c
 *
 *  Created on: Oct 26, 2019
 *      Author: Eng Ali Gamal


#define F_CPU 16000000UL //16 MHZ

#include "avr/io.h"
#include "util/delay.h"
#include "LIB/std_types.h"
#include "HAL/LED/inc/HAL_LED.h"
#include "HAL/LCD/inc/HAL_lcd.h"
#include "HAL/BUTTON/Inc/HAL_BUTTON.h"
#include "MCAL/Timer/TIM0_cfg.h"
#include "MCAL/Timer/TIM0.h"
#include "MCAL/interupts/ins/MCAL_interupt.h"

int main() {
	u8 buttom;
    u8 i =0;
	//u8 led;
	u8 falg = 0;
	u8 count =0;
	initLed(LED2);
	initLed(LED1);
	initLed(LED0);
	initButton(BUTTON0);
	initButton(BUTTON1);
	initButton(BUTTON2);

	LCD_init();

<<<<<<< HEAD
	TIM0_init();
=======
>>>>>>> b9386e6eaf69ac06665fab627ffa489c4c9e30b4

	while (1) {

		- Write a program to display the press time using a button and LCD,
		 *  When user push the button LCD is cleared,When user releases
		 * the button LCD shall display how long the user pressed in seconds
<<<<<<< HEAD

			getButtonState(BUTTON0, &buttom);
=======

			getButtonState(BUTTON0, &buttom);
>>>>>>> b9386e6eaf69ac06665fab627ffa489c4c9e30b4
		 if (buttom == 1) {
		 TIM0_setTCNT0(0xFF);
		 falg++;
		 LCD_clearScreen();
		 LCD_displayInteger(falg);
		 } else if (buttom == 0) {
		 falg = 0;
		 }

<<<<<<< HEAD
			Write a program that toggles three LEDs with
=======
			Write a program that toggles three LEDs with
>>>>>>> b9386e6eaf69ac06665fab627ffa489c4c9e30b4
		 *the following rates respectively, 100ms, 500ms, 1000ms
		 *

		TIM0_init();
		ISR(TIMER0_OVF_vect);
		falg++;

<<<<<<< HEAD
		if (TIM0_TCNT0_INIT >= 193)
		{
		 falg++;u9o.]'\'

		LCD_clearScreen();
		LCD_displayInteger(falg);

		switch (falg) {
		case 10:
			turnOnLed(LED0);
			TIM0_setTCNT0(0);

			break;
		case 50:
			turnOnLed(LED1);
			TIM0_setTCNT0(0);

			break;
		case 100:
			turnOnLed(LED2);
			TIM0_setTCNT0(0);

			break;
		default:
			break;

		}
		TIM0_setTCNT0(0);

		}

=======
		LCD_clearScreen();
		LCD_displayInteger(falg);

		switch (falg) {
		case 10:
			turnOnLed(LED0);
			break;
		case 50:
			turnOnLed(LED1);
			break;
		case 100:
			turnOnLed(LED2);
			break;
		default:
			break;

		}

>>>>>>> b9386e6eaf69ac06665fab627ffa489c4c9e30b4

		 Write a program that uses a button and LED,
		 * the button shall have the following modes:
		 *- Off press: Button pressed less than 2 seconds -> LED turns OFF.
		 *- Short press: Button pressed more than 2 seconds and less than
		 *4 seconds -> LED toggles at rate 500ms.
		 *- Long press: Button pressed more than
		 *4 seconds -> LED toggles at rate 1000ms
		 *



		 if (buttom == 1) {
		 TIM0_setTCNT0(0xFF);
		 falg++;
		 LCD_clearScreen();
		 LCD_displayInteger(falg);

		 turnOnLed(LED0);

<<<<<<< HEAD

		 if (buttom == 1) {
=======
		 } else if (buttom == 1) {
		 TIM0_setTCNT0(0xFF);
		 falg++;
		 LCD_clearScreen();
		 LCD_displayInteger(falg);
		 if ((buttom == 1) && (falg == 2)) {
		 turnOnLed(LED0);
		 }

		 } else if (buttom == 1) {
>>>>>>> b9386e6eaf69ac06665fab627ffa489c4c9e30b4
		 TIM0_setTCNT0(0xFF);
		 falg++;
		 LCD_clearScreen();
		 LCD_displayInteger(falg);

<<<<<<< HEAD
		 turnOnLed(LED0);

		 } else if (buttom == 1) {
		 TIM0_setTCNT0(0xFF);
		 falg++;
		 LCD_clearScreen();
		 LCD_displayInteger(falg);
		 if ((buttom == 1) && (falg == 2)) {
		 turnOnLed(LED0);
		 }

		 } else if (buttom == 1) {
		 TIM0_setTCNT0(0xFF);
		 falg++;
		 LCD_clearScreen();
		 LCD_displayInteger(falg);

		 if ((buttom == 1) && (falg == 4)) {
		 toogleLed(LED0);
		 }

		 }
		 }

=======
		 if ((buttom == 1) && (falg == 4)) {
		 toogleLed(LED0);
		 }

		 }
		 }

>>>>>>> b9386e6eaf69ac06665fab627ffa489c4c9e30b4
	}
}
*/
