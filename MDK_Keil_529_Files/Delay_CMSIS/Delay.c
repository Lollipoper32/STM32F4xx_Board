#include "Delay.h"
/*----------------------------------------------------------------------------*/ 
//HAL_Init();
//HAL_Delay(500);
/*----------------------------------------------------------------------------*/ 
void SysTick_Handler()
{
  HAL_IncTick();
}
/*----------------------------------------------------------------------------*/ 
void DelayUs(uint32_t us)
{
	int32_t us_count_tick =  us * (SystemCoreClock/1000000);
	SCB_DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
	DWT_CYCCNT  = 0;
	DWT_CONTROL |= DWT_CTRL_CYCCNTENA_Msk; 
	while(DWT_CYCCNT < us_count_tick);
	DWT_CONTROL &= ~DWT_CTRL_CYCCNTENA_Msk;
}
/*----------------------------------------------------------------------------*/ 
void DelayMs(uint32_t ms)
{
	int32_t ms_count_tick =  ms * (SystemCoreClock/1000);
	SCB_DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
	DWT_CYCCNT  = 0;
	DWT_CONTROL|= DWT_CTRL_CYCCNTENA_Msk; 
	while(DWT_CYCCNT < ms_count_tick);
	DWT_CONTROL &= ~DWT_CTRL_CYCCNTENA_Msk;
}
/*----------------------------------------------------------------------------*/ 