#include "main.h"
#include "Ultrasonic.h"

void Ultrasonics_Init (void)
{
    // ECHO
    MODULE_P33.IOCR4.B.PC7 = 0x02;
    // TRIGGER
    MODULE_P13.IOCR0.B.PC2 = 0x10;

    trigger_timer_init();
    eru_Init();
}

void eru_Init ()
{
    uint16 password = IfxScuWdt_getSafetyWatchdogPasswordInline();
    IfxScuWdt_clearSafetyEndinitInline(password);
    MODULE_SCU.EICR[2].B.EXIS0 = 0;

    MODULE_SCU.EICR[2].B.REN0 = 1;
    MODULE_SCU.EICR[2].B.FEN0 = 1;
    MODULE_SCU.EICR[2].B.EIEN0 = 1;

    MODULE_SCU.EICR[2].B.INP0 = 1;

    MODULE_SCU.IGCR[0].B.IGP1 = 1;

    Ifx_SRC_SRCR_Bits* src = (Ifx_SRC_SRCR_Bits*) (&MODULE_SRC.SCU.SCUERU[1]);
    src->SRPN = ISR_PRIORITY_ULTRASONIC;
    src->TOS = 0;
    src->CLRR = 1;
    src->SRE = 1;
    IfxScuWdt_setSafetyEndinitInline(password);
}


IFX_INTERRUPT(getResult,0, ISR_PRIORITY_ULTRASONIC);
uint32 start, end, diff;
float distance;
void getResult(){
    if(MODULE_P33.IN.B.P7 == 1){
        start = MODULE_STM0.TIM0.B.STM_31_0;
    } else {
        end = MODULE_STM0.TIM0.B.STM_31_0;
        diff = end - start;
        if(diff < 0) return;
        distance = (float) 0.0343 * diff / 200.0;
        my_printf("%f\n",distance);
    }
}



void trigger_timer_init(void){
    Ifx_GPT12_T2CON_Bits* t2con = &MODULE_GPT120.T2CON.B;
    t2con->T2M = 0; // Timer Mode
    t2con->T2UD = 1; // Down Counts
    // GPT1 100Mhz / 32 = 3,125,000 hz => 1clock = 0.32us
    // T2: 100Mhz / 32 * 32(1024) = 100,000 = 10us
    t2con->T2I = 5;

    Ifx_SRC_SRCR_Bits* src = &MODULE_SRC.GPT12.GPT12[0].T2.B;
    src->SRPN = ISR_PRIORITY_ULTRASONIC_TRIGGER;
    src->TOS = 0;
    src->CLRR = 1;
    src->SRE = 1;

    MODULE_GPT120.T2CON.B.T2R = 0;
    MODULE_GPT120.T2.B.T2 = 1;
}

IFX_INTERRUPT(stopSending,0, ISR_PRIORITY_ULTRASONIC_TRIGGER);
void stopSending(){
    MODULE_P13.OUT.B.P2 = 0;
    MODULE_GPT120.T2CON.B.T2R = 0;
    MODULE_GPT120.T2.B.T2 = 1;
}


void Ultrasonic_Send_Trigger (void)
{
    MODULE_P13.OUT.B.P2 = 1;
    MODULE_GPT120.T2CON.B.T2R = 1;
}
