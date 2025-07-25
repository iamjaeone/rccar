/*
 * Ultrasonic.h
 *
 *  Created on: 2025. 6. 26.
 *      Author: USER
 */

#ifndef BSW_IO_ULTRASONIC_H_
#define BSW_IO_ULTRASONIC_H_

typedef struct
{
    Ifx_P *port;
    uint8 pinIndex;
} GpioPin;

typedef struct
{
    GpioPin trigger;
    GpioPin echo;
} UltPin;

typedef enum ultradir
{
    ULT_LEFT, ULT_RIGHT, ULT_REAR, ULT_SENSORS_NUM
} UltraDir;

void ultrasonicInit (void);
int getDistanceByUltra (UltraDir dir);

#endif /* BSW_IO_ULTRASONIC_H_ */
