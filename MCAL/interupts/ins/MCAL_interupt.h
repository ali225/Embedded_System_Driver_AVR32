/*
 * MCAL_interupt.h
 *
 *  Created on: Oct 19, 2019
 *      Author: Eng Ali Gamal
 */

#ifndef MCAL_INTERUPTS_INS_MCAL_INTERUPT_H_
#define MCAL_INTERUPTS_INS_MCAL_INTERUPT_H_

/************* Type def section ************/

/* Port data type */
typedef enum
{
	INT_0,
	INT_1,
	INT_2
}extIntX_t;

typedef enum
{
	LOW_LEVEL,
	ANY_LOGICAL_CHANGE,
	FALLING_EDGE,
	RISING_EDGE
}extIntSensitivity_t;

extern stdReturnType_t initExternalInterrupt(extIntX_t exIntID, extIntSensitivity_t intSensitivity, void(* callBackPtr)(void));
extern stdReturnType_t configExternalInterruptSensitivity(extIntX_t exIntID, extIntSensitivity_t intSensitivity);
extern stdReturnType_t disableExternalInterrupt(extIntX_t exIntID);
extern stdReturnType_t disableGlobalInterrupts(void);
extern stdReturnType_t enableGlobalInterrupts(void);


#endif /* MCAL_INTERUPTS_INS_MCAL_INTERUPT_H_ */
