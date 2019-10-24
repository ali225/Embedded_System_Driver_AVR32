/*
 * Ledmain.c
 *
 *  Created on: Oct 24, 2019
 *      Author: Eng Ali Gamal
 */
#define F_CPU 16000000UL //16 MHZ
#define F_CPU 16000000UL //16 MHZ

#include "avr/io.h"
#include "util/delay.h"
#include "LIB/std_types.h"
#include "HAL/LED/inc/HAL_LED.h"
#include "HAL/BUTTON/inc/HAL_BUTTON.h"

int main(void) {
	u8 buttom;
	//u8 led;
	initLed(LED0);
	initLed(LED1);
	initButton(BUTTON0);
	initButton(BUTTON1);

	while(1){
		getButtonState(BUTTON0, &buttom);
		//getButtonState(BUTTON1, &buttom);
		if (buttom == ERROR) {
			turnOnLed(LED0);
			//_delay_loop_2(500);
			turnOnLed(LED1);
			turnOnLed(LED2);
		} else {
			turnOffLed(LED0);
			turnOffLed(LED1);
			turnOffLed(LED2);
		}
	}
	return 0;
}

/*while(1) {
 // check the flag
 if (flag == 1 ) {
 turnOnLed(LED0);
 flag = 0;
 }*/

/*
 int main() {

 u8 i =0;
 for(i=0;i<3;i++){
 initLed(i);
 }

 while (1) {

 //_delay_ms(1000);
 for(i=0;i<3;i++){
 toogleLed(i);
 }
 //_delay_ms(1000);
 //turnOffLed(LED1);
 //DIO_write(PORT_D, PIN7, PIN_IS_LOW);

 }
 return 0;
 }
 */

/*
 int main(void) {
 DDRD |= (1 << PD6); //configure pin 6 in PORTD as output pin

 PORTD |= (1 << PD6); // LED ON

 while (1) {
 PORTD &= (~(1 << PD6)); // LED OFf
 _delay_ms(1000);
 PORTD |= (1 << PD6);    // LED ON
 _delay_ms(1000);
 //*********** Another Method *************

 PORTD ^= (1 << PD6); // Toggle LED
 _delay_ms(1000);

 //*****************************************
 }
 }
 */

/*int main() {

 DDRD &= (1 << 0); // configure pin0 in PORTD as input pin

 DDRD |= (1 << 7); // configure pin 7 in PORTD as output pin
 PORTD &= ~(1 << 7); // LED OFF

 while (1) {

 if (PIND & (1 << 0)) {	 // Check the button status pressed or not

 PORTD |= (1 << 7);		// LED ON
 } else {

 PORTD &= ~(1 << 7);		 // LED OFF
 }
 }
 return 0;
 }*/

/*int main ()
 {
 DDRD |= (1<<PIN7);   // Config pin7 Output
 DDRD |= (1<<PIN6);  // Config Pin7 Output

 DDRD &=~(1<<PIN0);  /// Config Pin0 input

 while (1)
 {
 if(PIND & (1<<PIN0))        // if push Button
 {
 PORTD |= (1<<PIN7);   // Led on
 PORTD &=~(1<<PIN6);   // Led off
 }else if(PIND &=~(1<<PIN0)) // if not Push button
 {
 PORTD &=~(1<<PIN7);     // Led Off
 PORTD |= (1<<PIN6);     // Led on
 }else{
 _delay_ms(100);
 }
 }
 }*/

/*
 int main() {
 DDRD |= (1 << PIN7); // config pin7 output
 //PORTD = 0xff;
 DDRD &= ~(1 << PIN0); // config pin0 input

 //DDRD &=~ ((1 << PIN0) | (1 << PIN1) | (1<<PIN2)); // config pin7 output

 while (1) {

 if (PIND & (1 << PIN0)) {

 PORTD |= (1 << PIN7);
 } else {
 PORTD &= ~(1 << PIN7);
 }

 PORTD |= (1 << PIN0);
 _delay_ms(500);
 PORTD &= ~(1 << PIN0);
 _delay_ms(500);
 }

 }
 */

/*
 int main(void) {
 DDRD = 0b11100000; // Data Direction Register D : writing a one to the bit enables output

 while (1) {
 PORTD = 0b11100000; //Turn on Two led pin/bit in port D
 _delay_ms(100);		//wait
 PORTD = 0b00000000;	// Turn off all led in port D
 _delay_ms(100);		//wait
 }
 return 0;
 }
 */
