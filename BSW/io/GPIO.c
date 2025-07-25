#include "main.h"
#include "GPIO.h"

void GpioInit(){
    // LED
    MODULE_P10.IOCR0.B.PC1 = (1 << 4);
    MODULE_P10.IOCR0.B.PC2 = (1 << 4);

    // Button
    MODULE_P02.IOCR0.B.PC0 = (1 << 1);
    MODULE_P02.IOCR0.B.PC1 = (1 << 1);

    // Buzzer
    MODULE_P02.IOCR0.B.PC3 = (1 << 4);

}

static void buzzer(unsigned int hz){
    volatile int loop = 1000000000 / hz / 2 / 5 / 2;
    MODULE_P02.OUT.B.P3 = 1;
    for (int i = 0; i < loop; i++);
    MODULE_P02.OUT.B.P3 = 0;
    for (int i = 0; i < loop; i++);
}

void buzz(unsigned int hz, unsigned int duration_ms){
    duration_ms /= 2;
    while(duration_ms > 0){
        buzzer(hz);
        duration_ms--;
    }
}



void SetLed(LED_enum led, BitStatus bit){
    switch(led){
        case RED:
            MODULE_P10.OUT.B.P1 = bit;
            break;
        case BLUE:
            MODULE_P10.OUT.B.P2 = bit;
            break;
    }
}

void LedToggle(LED_enum led){
    switch(led){
        case RED:
            MODULE_P10.OMR.U = ((1 << 17) | (1 << 1));
            break;
        case BLUE:
            MODULE_P10.OUT.B.P2 = !MODULE_P10.OUT.B.P2;
            break;
    }
}



BitStatus GetButton(Button button){
    switch(button){
        case BUTTON1:
            return MODULE_P02.IN.B.P0 == 0;
            break;
        case BUTTON2:
            return MODULE_P02.IN.B.P1 == 0;
            break;
        default:
            return RESET;
    }
}
