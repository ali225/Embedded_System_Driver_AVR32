/*
  Author:  Khaled Hossam
  Date:    9/14/2019
  Version: 1.0
*/

#ifndef TIM0_INT_H
#define TIM0_INT_H

/* Macros to enable or disable interrupts for OVF and CM */
#define TIM0_OVF_INT_ENABLE     1
#define TIM0_OVF_INT_DISABLE    0

#define TIM0_CM_INT_ENABLE      1
#define TIM0_CM_INT_DISABLE     0

/* Macros to enable or disable force compare match on OC0 pin */
#define TIM0_CMO_ENABLE      1
#define TIM0_CMO_DISABLE     0

/* Function to init timer 0 */
extern void TIM0_init(void);

/* Function to enable/disable overflow interrupt */
extern void TIM0_overFlowIntState(u8 state);

/* Function to enable/disable compare match interrupt */
extern void TIM0_compareMatchIntState(u8 state);

/* Function to set value in TCNTO register */
extern void TIM0_setTCNT0(u8 value);

/* Function to set value in OCR0 register */
extern void TIM0_setOCRO(u8 value);

/* Function force compare match on OC0 pin */
void TIM0_forceOutputCompare(u8 state);

/* Function set callback for overflow interrupt */
extern void TIM0_setOvfIntCallback(void (*callbackPtr)(void));

/* Function set callback for compare match interrupt */
extern void TIM0_setCmIntCallback(void (*callbackPtr)(void));

#endif
