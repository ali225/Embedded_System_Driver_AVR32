/*
 * LED.h
 *
 *  Created on: Oct 7, 2019
 *      Author: Eng Ali Gamal
 */

#ifndef LED_HAL_LED_H_
#define LED_HAL_LED_H_

/************* Type def section ************/
typedef enum
{
	LED0,
	LED1,
	LED2,
	MAX_NUM_OF_LEDS
}ledX_t;


/************* Function declaration section ************/
extern stdReturnType_t initLed(ledX_t ledID);
extern stdReturnType_t turnOnLed(ledX_t ledID);
extern stdReturnType_t turnOffLed(ledX_t ledID);
extern stdReturnType_t toogleLed(ledX_t ledID);

#endif /* LED_HAL_LED_H_ */
