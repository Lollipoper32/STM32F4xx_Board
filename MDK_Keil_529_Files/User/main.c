#include "main.h"
#include "Delay.h"
/*.......................................................*/
int main (void) {
 HAL_Init();
  SystemClock_Config();
  GPIO_Configuration();
	/*----------------------------------------------*/
	while(true){
		HAL_Delay(1000);	
		HAL_GPIO_TogglePin(LED_GPIO_Port,LED_Pin);
	}
}
/*.......................................................*/




