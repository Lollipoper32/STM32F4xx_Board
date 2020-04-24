//#include "Delay.h"
#include "stm32f4xx_hal.h"
#include <stdint.h>
/*----------------------------------------------------------------------------*/
#define    DWT_CYCCNT    *(volatile unsigned long *)0xE0001004
#define    DWT_CONTROL   *(volatile unsigned long *)0xE0001000
#define    SCB_DEMCR     *(volatile unsigned long *)0xE000EDFC
/*----------------------------------------------------------------------------*/
void DelayUs(uint32_t us);
void DelayMs(uint32_t ms);
/*----------------------------------------------------------------------------*/
