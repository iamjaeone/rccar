#include "Bluetooth.h"
#include "main.h"

void Bluetooth_Init (void)
{
    Asclin1_InitUart();

    // Interrupt
    Ifx_SRC_SRCR_Bits *src = (Ifx_SRC_SRCR_Bits*) &MODULE_SRC.ASCLIN.ASCLIN[1].RX.B;
    src->SRPN = ISR_PRIORITY_ASCLIN1_RX;
    src->TOS = 0;
    src->CLRR = 1;
    MODULE_ASCLIN1.FLAGSENABLE.B.RFLE = 1;
    src->SRE = 1;
}



IFX_INTERRUPT(Asclin1RxIsrHandler, 0, ISR_PRIORITY_ASCLIN1_RX);
void Asclin1RxIsrHandler (void)
{
    char c = Asclin1_InUart();
    Asclin0_OutUart(c);
}



void Bluetooth_SetName (char *name)
{
    char buf[30] = {'\0', };
    int i = 0;
    sprintf(buf, "AT+NAME%s\r\n", name);

    /* Send AT Command */
    while (buf[i] != 0)
    {
        Asclin1_OutUart(buf[i]);
        i++;
    }
    Asclin1_OutUart('\0');

    delay_ms(300);
}

void Bluetooth_SetPwd (char *pwd)
{
    char buf[30] = {'\0', };
    int i = 0;
    sprintf(buf, "AT+PIN%s\r\n", pwd);

//    my_printf("%s", buf);
    while (buf[i] != 0)
    {
        Asclin1_OutUart(buf[i]);
        i++;
    }
    Asclin1_OutUart('\0');



    char c = 0;
    while(1){
        if(Asclin1_PollUart(&c)){
            my_printf("%c", c);
        }
    }


    delay_ms(300);
}

void Bluetooth_SetBaud (int baudrate)
{
    char buf[30];
    int i = 0;
    switch (baudrate)
    {
        case 9600 :
            sprintf(buf, "AT+BAUD4");
            break;
        case 115200 :
            sprintf(buf, "AT+BAUD8");
            break;
    }
    while (buf[i] != 0)
    {
        Asclin1_OutUart(buf[i]);
        i++;
    }
    Asclin1_OutUart(buf[i]);
    delay_ms(300);
}

/* AT command reference: https://www.martyncurrey.com/hc-06-zg-b23090w-bluetooth-2-0-edr-modules/ */
void Bluetooth_ATCommand (char *cmd)
{
    char buf[30];
    int i = 0;
    sprintf(buf, "%s", cmd);
    while (buf[i] != 0)
    {
        Asclin1_OutUart(buf[i]);
        i++;
    }
    Asclin1_OutUart(buf[i]);
//    Asclin1_OutUart('\r');
//    Asclin1_OutUart('\n');

    delay_ms(300);
}

char Bluetooth_RecvByteBlocked (void)
{
    return Asclin1_InUart();
}

char Bluetooth_RecvByteNonBlocked (void)
{
    unsigned char ch = 0;
    int res;
    res = Asclin1_PollUart(&ch);

    return res == 1 ? ch : -1;
}

void Bluetooth_SendByteBlocked (unsigned char ch)
{
    Asclin1_OutUart(ch);
}

void Bluetooth_printf (const char *fmt, ...)
{
    char buffer[128];
    char buffer2[128]; // add \r before \n
    char *ptr;
    va_list ap;

    va_start(ap, fmt);
    vsprintf(buffer, fmt, ap);
    va_end(ap);
    int j = 0;
    for (int i = 0; buffer[i]; i++)
    {
        if (buffer[i] == '\n')
        {
            buffer2[j++] = '\r';
            buffer2[j++] = buffer[i];
        }
        else
        {
            buffer2[j++] = buffer[i];
        }
    }
    buffer2[j] = '\0';

    for (ptr = buffer2; *ptr; ++ptr)
        Bluetooth_SendByteBlocked((const unsigned char) *ptr);
}
