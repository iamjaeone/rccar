#ifndef BSW_DRIVER_EVADC_H_
#define BSW_DRIVER_EVADC_H_

#define AN24_CHID      1
#define AN25_CHID      0

#define GROUPID_3     IfxEvadc_GroupId_3

void Evadc_Init(void);

unsigned int Evadc_readVR(void);
unsigned int Evadc_readPR(void);


#endif /* BSW_DRIVER_EVADC_H_ */
