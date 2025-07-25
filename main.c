#include "main.h"

typedef enum ultradir{
    LEFT, RIGHT, REAR
}UltraDir;


void uInit (void)
{
    /* Init left ultrasonic pin */
    MODULE_P10.IOCR4.B.PC5 = 0x10; /* Set TRIG (P02.4) Pin to output */
    MODULE_P10.IOCR0.B.PC3 = 0x02; /* Set ECHO (P02.6) Pin to input */

    /* Init right Ultrasonic Pin */
    MODULE_P10.IOCR0.B.PC1 = 0x10; /* Set TRIG (P13.2) Pin to output */
    MODULE_P10.IOCR0.B.PC2 = 0x02; /* Set ECHO (P13.1) Pin to input */
}


void sendTrigger_ (UltraDir dir)
{

    if (dir == LEFT)
    {
        MODULE_P10.OUT.B.P5 = 1;
        delay_us(10);
        MODULE_P10.OUT.B.P5 = 0;
    }
    else if (dir == RIGHT)
    {
        MODULE_P10.OUT.B.P1 = 1;
        delay_us(10);
        MODULE_P10.OUT.B.P1 = 0;
    }

}




uint32 getDistance_ (UltraDir dir)
{
    uint32 start, end;
    sendTrigger_(dir);
    if(dir == LEFT)  while (MODULE_P10.IN.B.P3 == 0);
    if(dir == RIGHT) while (MODULE_P10.IN.B.P2 == 0);
    start = MODULE_STM0.TIM0.B.STM_31_0;
    if(dir == LEFT)  while (MODULE_P10.IN.B.P3 == 1);
    if(dir == RIGHT) while (MODULE_P10.IN.B.P2 == 1);
    end = MODULE_STM0.TIM0.B.STM_31_0;
    return end - start;
}




char buf[100];
void bluetoothCommand(){
    my_scanf("%s", buf);
    my_printf("%s\n", buf);
    Bluetooth_ATCommand(buf);
}


//int main ()
//{
//    SystemInit();
//    uInit();
//    int distance;
//    Motor_stopChA();
//    Motor_stopChB();
//    while (1)
//    {
//
//        sendTrigger_(RIGHT);
//        distance = getDistance_(RIGHT) / 1000 / 3;
//        my_printf("Distance of RIGHT: %d\n", distance);
//        delay_ms(200);
//    }
//}


int main(){
    SystemInit();
//    uInit();
    // LEFT
    // RIGHT
    while(1){
        Motor_movChA_PWM(30, 1);
        Motor_movChB_PWM(30, 1);
    }
}

