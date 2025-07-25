#include "main.h"
#include "stm.h"

void delay_ms(int msec){
    uint32 target = MODULE_STM0.TIM0.U;
    target += msec * 100000;
    while(MODULE_STM0.TIM0.U < target);
    return;
}


void delay_us(int usec){
    uint32 target = MODULE_STM0.TIM0.U;
    target += usec * 100;
    while(MODULE_STM0.TIM0.U < target);
    return;
}


uint64 getTimeUs(void){
    uint64 result;

    result = MODULE_STM0.TIM0.U;
    result |= ((uint64) MODULE_STM0.CAP.U) << 32;
    return result / 100;
}


uint64 getTime10Ns(void){
    uint64 result;
    result = MODULE_STM0.TIM0.U;
    result |= ((uint64) MODULE_STM0.CAP.U) << 32;
    return result;
}

IFX_INTERRUPT(Stm0IsrHandler, 0, ISR_PRIORITY_STM0);
void Stm0IsrHandler(){
    MODULE_STM0.CMP[0].B.CMPVAL = MODULE_STM0.TIM0.U + 100000000;

    my_printf("stm0 interrupt per sec\n");
}


void StmInterreuptInit(){
    MODULE_STM0.CMCON.B.MSIZE0 = 0x1F;
    MODULE_STM0.CMCON.B.MSTART0 = 0;

    MODULE_STM0.ICR.B.CMP0OS = 1; // IR(SR) 선택

//    Ifx_SRC_SRCR_Bits* src = (Ifx_SRC_SRCR_Bits*) &MODULE_SRC.STM.STM[0].SR[1].B;
//    src->SRPN = ISR_PRIORITY_STM0;
//    src->TOS = 0;
//    src->CLRR = 1;
//    src->SRE = 1;
//
//    MODULE_STM0.ICR.B.CMP0EN = 1;
//    MODULE_STM0.CMP[0].B.CMPVAL = (Ifx_UReg_32Bit) MODULE_STM0.TIM0.U + 100000000;

}
