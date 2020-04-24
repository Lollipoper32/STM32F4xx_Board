//#include "main.h"
#include "stm32f4xx_hal.h"
#include "stdbool.h"
#include <stdint.h>
/*-----------------------------------------------------------------------------*/
void SystemClock_Config(void);
void GPIO_Configuration(void);
void Error_Handler(void);

/*----------------------------------------------------------------------------*/
#define LED_Pin GPIO_PIN_0
#define LED_GPIO_Port GPIOE
#define KEY1_Pin GPIO_PIN_3
#define KEY1_GPIO_Port GPIOE
#define KEY2_Pin GPIO_PIN_4
#define KEY2_GPIO_Port GPIOE
/*----------------------------------------------------------------------------*/
