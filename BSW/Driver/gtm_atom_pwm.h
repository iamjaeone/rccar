#ifndef BSW_DRIVER_GTM_ATOM_PWM_H_
#define BSW_DRIVER_GTM_ATOM_PWM_H_

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
                              /* Interrupt priority number                        */
#define LED                 IfxGtm_ATOM0_4_TOUT14_P00_5_OUT     /* LED which will be driven by the PWM              */
#define PWM_A               IfxGtm_ATOM0_1_TOUT1_P02_1_OUT
#define PWM_B               IfxGtm_ATOM1_3_TOUT105_P10_3_OUT

#define CLK_FREQ            1000000.0f                          /* CMU clock frequency, in Hertz                    */
#define PWM_PERIOD          1000                                /* PWM period for the ATOM, in ticks                */


void GtmAtomPwm_Init(void);
void GtmAtomPwm_SetDutyCycle(uint32 dutyCycle);

void GtmAtomPwmA_SetDutyCycle(uint32 dutyCycle);
void GtmAtomPwmB_SetDutyCycle(uint32 dutyCycle);

#endif /* BSW_DRIVER_GTM_ATOM_PWM_H_ */
