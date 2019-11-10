/*
 * sevenmain.c
 *
 *  Created on: Oct 24, 2019
 *      Author: Eng Ali Gamal
 */

/**********include Liberty in driver  *********/
/*
#define F_CPU 16000000UL //16 MHZ
#include "util/delay.h"
#include "LIB/std_types.h"
#include "HAL/seven/inc/HAL_Seven.h"
*/
//#include "HAL/BUTTON/inc/HAL_BUTTON.h"

/******* lab 3 *******/
/*
int main() {
	u8 num1 = 0;
	u8 num2 = 0;
	u8 i = 0;
	u8 j = 0;
	u8 k = 0;
	// init Seven segment
	initSevenSegment(SEVEN_SEGMENT0);
	initSevenSegment(SEVEN_SEGMENT1);

	controlSevenSegment(SEVEN_SEGMENT0, SEGMANT_DISABLED);
	controlSevenSegment(SEVEN_SEGMENT1, SEGMANT_DISABLED);

	while (1) {

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < 40; k++) {
					controlSevenSegment(SEVEN_SEGMENT0, SEGMENT_ENABLED);
					controlSevenSegment(SEVEN_SEGMENT1, SEGMANT_DISABLED);
					TurnOnDecimalPoint(SEVEN_SEGMENT0);
					writeToSevenSegment(SEVEN_SEGMENT0, num1);
					num1++;
					_delay_ms(100);

					controlSevenSegment(SEVEN_SEGMENT0, SEGMANT_DISABLED);
					controlSevenSegment(SEVEN_SEGMENT1, SEGMENT_ENABLED);
					TurnOnDecimalPoint(SEVEN_SEGMENT1);
					writeToSevenSegment(SEVEN_SEGMENT1, num2);
					num2++;
					_delay_ms(100);

				}
			}
		}
	}
}
*/

/*

 ********* lab2 ************

 int main() {
 u8 num = 0;   // number counter of seven segment
 //u8 i = 0;
 u8 bt1 = 0, bt2 = 0;
 **********init and control seven segment   ***********
 initSevenSegment(SEVEN_SEGMENT0);
 controlSevenSegment(SEVEN_SEGMENT0, SEGMENT_ENABLED);
 ***********init button and get button ***********
 initButton(BUTTON0);   // Button counter up
 initButton(BUTTON1);   // Button counter down

 while (1) {

 getButtonState(BUTTON0, &bt1); // get Button one
 getButtonState(BUTTON1, &bt2); // get Button two

 if (bt1 == 1) {
 _delay_ms(200);
 TurnOnDecimalPoint(SEVEN_SEGMENT0); // on Seven Segment
 writeToSevenSegment(SEVEN_SEGMENT0, num); // write on seven segment
 _delay_ms(200);
 num++;  // counter seven segment
 } else if (bt2 == 1) {
 _delay_ms(200);

 TurnOnDecimalPoint(SEVEN_SEGMENT0);  // on Seven Segment
 writeToSevenSegment(SEVEN_SEGMENT0, num); // write on seven segment
 _delay_ms(200);
 num--;   // counter seven segment
 }
 }
 }
 */

/************ Lab1 ***************/
/*
 int main() {
 initSevenSegment(SEVEN_SEGMENT0);
 controlSevenSegment(SEVEN_SEGMENT0, SEGMENT_ENABLED);
 u8 num = 0;
 u8 i = 0;
 while (1) {
 for (i = 0; i <= 9; i++) {
 TurnOnDecimalPoint(SEVEN_SEGMENT0);
 TurnOnDecimalPoint(SEVEN_SEGMENT0);
 writeToSevenSegment(SEVEN_SEGMENT0, num);
 num++;
 _delay_ms(500);
 }
 }

 }
 */
