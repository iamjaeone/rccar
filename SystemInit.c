#include "main.h"
#include "SystemInit.h"

IFX_ALIGN(4) IfxCpu_syncEvent g_cpuSyncEvent = 0;

void SystemInit (void)
{
    IfxCpu_enableInterrupts();
    IfxScuWdt_disableCpuWatchdog(IfxScuWdt_getCpuWatchdogPassword());
    IfxScuWdt_disableSafetyWatchdog(IfxScuWdt_getSafetyWatchdogPassword());

    IfxCpu_emitEvent(&g_cpuSyncEvent);
    IfxCpu_waitEvent(&g_cpuSyncEvent, 1);

    GpioInit();
    // UART
    Asclin0_InitUart();

    // BUTTON
    scueru_Init();

    StmInterreuptInit();
    gpt12_init();

//    Ultrasonics_Init();

//    Evadc_Init();

    Motor_Init();

    Bluetooth_Init();


    Can_Init(BD_500K, CAN_NODE0);

}
