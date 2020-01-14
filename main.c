/*

 * main.c
 *
 *  Created on: Sep 26, 2019
 *      Author: Eng Ali Gamal
*/

#define F_CPU 16000000UL //16 MHZ


#include "util/delay.h" 
#include "LIB/std_types.h"
#include "HAL/LED/inc/HAL_LED.h"
#include "HAL/BUTTON/inc/HAL_BUTTON.h"
 #include "MCAL/interupts/ins/MCAL_interupt.h"
 #include "HAL/seven/inc/HAL_Seven.h"
 #include "LIB/bit_math.h"
 #include "LIB/registers.h"
 #include "MCAL/DIO/inc/DIO.h"
 #include "HAL/LED/inc/HAL_LED_cfg.h"
 #include "HAL/LED/inc/HAL_LED.h"
 #include "HAL/seven/inc/HAL_Seve_cfg.h"
 #include "HAL/seven/inc/HAL_Seven.h"
 #include "HAL/LCD/inc/HAL_LCD.h"
 #include "HAL/LCD/inc/HAL_LCD_cfg.h"

/*
 u8 flag = 1;
 void callBack(void);
 void callBack(void) {
 u8 flag = 1;
 //turnOnLed(LED0);
 }
 int main(void)
 {		int i = 1;
 stdReturnType_t status = ERROR;
 initSevenSegment(SEVEN_SEGMENT0);
 initLed(LED0);
 initButton(BUTTON2);
 initExternalInterupt(INT_0,RISING_EDGE,callBack);

 while(1)
 {
 if(flag == 1)
 {
 turnOnLed(LED0);
 writeToSevenSegment(SEVEN_SEGMENT0,i);
 i++;
 flag = 0;
 }else if (flag == 0)
 {
 turnOffLed(LED0);
 flag = 0;
 }
 }

 }



 int main(void) {
 stdReturnType_t status;
 initLed(LED0);
 initButton(BUTTON2);
 initExternalInterupt(INT_0, RISING_EDGE, callBack);

 while (1) {
 if (flag == 1) {
 turnOnLed(LED0);
 flag = 0;
 } else if (flag == 0) {
 turnOnLed(LED0);
 flag = 0;
 } else {
 status = flag;
 }
 }
 }


	while(1){
 // check the flag
 if (flag == 1 ){
 turnOnLed(LED0);
 flag = 0;
 }


 int main()
 {

 stdReturnType_t status;
 status = init_LCD();
 status |= LCD_displaycharacter('A');

 return 0;

 }



 int main() {

 initSevenSegment(SEVEN_SEGMENT0);

 while (1) {

 controlSevenSegment(SEVEN_SEGMENT0, SEGMENT_ENABLED);
 TurnOffDecimalPoint(SEVEN_SEGMENT0);
 _delay_ms(30);
 writeToSevenSegment(SEVEN_SEGMENT0, 10);
 _delay_ms(30);
 TurnOffDecimalPoint(SEVEN_SEGMENT0);
 }

 }


 int main() {
 // inint seven segment
 inintSevenSegment(seven_one);

 while (1) {

 //writeSevenSegment(seven_one, 01001);
 contolrsevensegment(seven_one, enable);

 //writeSevenSegment(seven_two, 010100);
 contolrsevensegment(seven_two,disbale);
 }

 }


*/
 int main() {

 //DIO_init(PORT_D, PIN5, OUTPUT);
 initLed(LED1);
 while (1) {


 _delay_ms(1000);
 turnOnLed(LED1);
 _delay_ms(1000);
 turnOffLed(LED1);
 //DIO_write(PORT_D, PIN7, PIN_IS_LOW);

 }
 return 0;
 }
/*


 int main(void) {

 unsigned char num = 0;
 DDRD = DDRD & (~(1 << PD4)); // configure pin 4 in PORTD as input pin
 DDRC |= 0x0F; // configure first four pins of PORTC as output pins

 // initialize the 7-segment
 PORTC &= ~((1 << PC0) | (1 << PC1) | (1 << PC2) | (1 << PC3));

 while (1) {
 // check if the push button is pressed or not
 if ( PIND & (1 << PD4)) {
 _delay_ms(30);
 //second check due to switch bouncing
 if ( PIND & (1 << PD4)) {
 if ((PORTC & 0x0F) == 9) {
 // if overflow occurs
 num = 0;
 PORTC = (PORTC & 0xF0) | (num & 0x0F);
 } else {
 // increment 7-segment every press
 num++;
 PORTC = (PORTC & 0xF0) | (num & 0x0F);
 }
 }
 while ( PIND & (1 << PD4)) {
 } // wait until switch is released
 }
 }
 }




 int main(void)
 {
 DDRB = DDRB & (~(1<<PB0)); // configure pin 0 of PORTB to be input pin
 DDRB = DDRB & (~(1<<PB1)); // configure pin 1 of PORTB to be input pin
 DDRC = DDRC | (1<<PC0);    // configure pin 0 of PORTC to be output pin
 DDRC = DDRC | (1<<PC1);    // configure pin 1 of PORTC to be output pin

 //initialize leds
 PORTC = PORTC & (~(1<<PC0));  // led1 is off at the beginning
 PORTC = PORTC & (~(1<<PC1));  // led2 is off at the beginning

 while(1)
 {
 if(PINB & (1<<PB0)) // Check if the first switch is pressed
 {
 PORTC |= (1<<PC0); // LED1 ON
 }
 else
 {
 PORTC &= (~(1<<PC0)); // LED1 OFF
 }
 if(PINB & (1<<PB1)) // Check if the second switch is pressed
 {
 PORTC |= (1<<PC1); // LED2 ON
 }
 else
 {
 PORTC &= (~(1<<PC1)); // LED2 OFF
 }
 }
 }



 int main(void)
 {
 DDRD  |= (1<<PD6); //configure pin 6 in PORTD as output pin

 PORTD |= (1<<PD6); // LED ON

 while(1)
 {
 PORTD  &= (~(1<<PD6)); // LED OFf
 _delay_ms(1000);
 PORTD |= (1<<PD6);    // LED ON
 _delay_ms(1000);
 //*********** Another Method *************

 PORTD ^= (1<<PD6); // Toggle LED
 _delay_ms(1000);

 //*****************************************
 }
 }




 int main()
 {
 ********* Initialization Code *********
 DDRC &= ~(1<<7); // configure pin 3 in PORTC as input pin

 DDRD |= (1<<6); // configure pin 5 in PORTD as output pin
 PORTD &= ~(1<<6); // LED OFF

 while(1)
 {
 ********* Application Code *********
 if(PINC & (1<<7)) // Check the button status pressed or not
 {
 PORTD |= (1<<6); // LED ON
 }
 else
 {
 PORTD &= (~(1<<6)); // LED OFF
 }
 }
 }


int main ()
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
 }


 int main() {
 DDRD |= (1 << PIN7); // config pin7 output
 //PORTD = 0xff;
 DDRD &= ~(1 << PIN0); // config pin7 input

 //DDRD &=~ ((1 << PIN0) | (1 << PIN1) | (1<<PIN2)); // config pin7 output

 while (1) {

 if (PIND & (1 << PIN0)) {

 PORTD |= (1 << PIN7);
 } else {
 PORTD &= ~(1 << PIN7);
 }

 PORTD |= (1 << PIN0);
 _delay_ms(500);
 PORTD &=~ (1 << PIN0);
 _delay_ms(500);
 }

 }


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
