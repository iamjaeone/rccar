#include "main.h"
#include "SystemInit.h"

void SystemInit (void)
{


//    GpioInit();
    // UART
    Asclin0_InitUart();

    // BUTTON
//    scueru_Init();

//    StmInterreuptInit();
//    gpt12_init();

    ultrasonicInit();

//    Evadc_Init();

    Motor_Init();

//    Bluetooth_Init();
//    Can_Init(BD_500K, CAN_NODE0);

}
