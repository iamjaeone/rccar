/*
 * asclin.h
 *
 *  Created on: 2025. 6. 23.
 *      Author: USER
 */

#ifndef BSW_DRIVER_ASCLIN_H_
#define BSW_DRIVER_ASCLIN_H_


void Asclin0_InitUart(void);
void Asclin0_OutUart(const unsigned char chr);
int Asclin0_PollUart(unsigned char *chr);
unsigned char Asclin0_InUart(void);
char Asclin0_InUartNonBlock(void);
void Asclin0RxIsrHandler(void);

void Asclin1_InitUart (void);
void Asclin1_OutUart (const unsigned char chr);
unsigned char Asclin1_InUart (void);
int Asclin1_PollUart (unsigned char *chr);


#endif /* BSW_DRIVER_ASCLIN_H_ */
