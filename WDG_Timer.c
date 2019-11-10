/*
 * WDG_Timer.c
 *
 *  Created on: Nov 2, 2019
 *      Author: Eng Ali Gamal
 */

#define F_CPU 16000000UL //16 MHZ

#include "avr/io.h"
#include "util/delay.h"
#include "LIB/std_types.h"
#include "HAL/LED/inc/HAL_LED.h"
#include "MCAL/Timer/TIM0.h"
#include "MCAL/WDG/WDG.h"

int main() {

	initLed(LED0);
	turnOnLed(LED0);
	WDG_Enable(TIME_2100_MS);
	while (1) {

	}
}
