/*
 * stm.h
 *
 *  Created on: 2025. 6. 25.
 *      Author: USER
 */

#ifndef BSW_DRIVER_STM_H_
#define BSW_DRIVER_STM_H_

#include "IfxStm.h"
#include "IfxSrc.h"
#include "Ifx_Types.h"

uint64 getTimeUs(void);
void Stm0IsrHandler(void);
void StmInterreuptInit();


#endif /* BSW_DRIVER_STM_H_ */
