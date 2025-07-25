/*
 * motor.h
 *
 *  Created on: 2025. 6. 27.
 *      Author: USER
 */

#ifndef BSW_DRIVER_MOTOR_H_
#define BSW_DRIVER_MOTOR_H_

#include "Ifx_Types.h"
#include "IfxGpt12.h"
#include "IfxPort.h"

#include "../Driver/gtm_atom_pwm.h"

void Motor_Init(void);

///* 1: 정방향, 2: 역방향 */
void Motor_movChA(int dir);
void Motor_stopChA(void);
///* 1: 정방향, 0: 역방향 */
void Motor_movChA_PWM(int duty, int dir);
///* 1: 정방향, 2: 역방향 */
void Motor_movChB(int dir);
void Motor_stopChB(void);
///* 1: 정방향, 0: 역방향 */
void Motor_movChB_PWM(int duty, int dir);


#endif /* BSW_DRIVER_MOTOR_H_ */
