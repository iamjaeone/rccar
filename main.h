#ifndef MAIN_H_
#define MAIN_H_


#define ISR_PRIORITY_ATOM   21

#define ISR_PRIORITY_ASCLIN0_RX 15
//#define ISR_PRIORITY_ASCLIN0_TX 16
#define ISR_PRIORITY_ASCLIN1_RX 25

#define ISR_PRIORITY_ERU_INT0 14

#define ISR_PRIORITY_ULTRASONIC 13
#define ISR_PRIORITY_ULTRASONIC_TRIGGER 30

#define ISR_PRIORITY_GPT1T3_TIMER 20
#define ISR_PRIORITY_GPT2T6_TIMER 21

#define ISR_PRIORITY_STM0 50


#define ISR_PRIORITY_CAN_TX 2
#define ISR_PRIORITY_CAN_RX 1

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "IfxAsclin.h"
#include "IfxAsclin_bf.h"
#include "IfxEvadc.h"
#include "IfxEvadc_Adc.h"
#include "IfxGpt12.h"
#include "IfxScuWdt.h"
#include "IfxCpu.h"
#include "IfxPort.h"
#include "Ifx_Types.h"
#include "IfxGtm_Atom_Pwm.h"
#include "IfxCan_Can.h"
#include "IfxCan.h"


#include "GPIO.h"
#include "asclin.h"
#include "my_stdio.h"
#include "gtm_atom_pwm.h"
#include "eru.h"
#include "gpt12.h"
#include "Ultrasonic.h"
#include "evadc.h"
#include "stm.h"
#include "SystemInit.h"
#include "Bluetooth.h"
#include "motor.h"
#include "can.h"

int main();
#endif /* MAIN_H_ */
