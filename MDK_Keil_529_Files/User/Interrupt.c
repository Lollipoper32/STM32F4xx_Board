#include "main.h"
/*.......................................................*/
void EXTI3_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
}
/*.......................................................*/
void EXTI4_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
}
/*.......................................................*/
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	HAL_GPIO_TogglePin(LED_GPIO_Port,LED_Pin);
	if(GPIO_Pin==GPIO_PIN_3)
		;
	if(GPIO_Pin==GPIO_PIN_4)	
		;
}