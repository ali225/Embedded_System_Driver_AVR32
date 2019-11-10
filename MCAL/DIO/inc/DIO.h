/*
 * DIO.h
 *
 *  Created on: Sep 28, 2019
 *      Author: Abdelrahman Elesh
 */

#ifndef DIO_MCAL_INC_DIO_H_
#define DIO_MCAL_INC_DIO_H_

/************* Type def section ************/

/* Port data type */
typedef enum
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D
}portX_t;

/* Pin data type */
typedef enum
{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}pinX_t;

typedef enum
{
	INPUT,
	OUTPUT
}pinDir_t;

typedef enum
{
	PIN_IS_LOW,
	PIN_IS_HIGH

}pinState_t;

/************ Function declaration section ***********/

extern stdReturnType_t DIO_init(portX_t PortName, pinX_t PinNum, pinDir_t direction);
extern stdReturnType_t DIO_read(portX_t PortName, pinX_t PinNum, pinState_t * ppinState);
extern stdReturnType_t DIO_write(portX_t PortName, pinX_t PinNum, pinState_t pinState);



#endif /* DIO_MCAL_INC_DIO_H_ */
