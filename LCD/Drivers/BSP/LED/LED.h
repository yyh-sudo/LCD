#ifndef __LED_H
#define __LED_H

#include "main.h"
#define LED0(x) do{x?\
				HAL_GPIO_WritePin (GPIOF ,LED0_Pin,GPIO_PIN_SET ):\
				HAL_GPIO_WritePin (GPIOF ,LED0_Pin,GPIO_PIN_RESET );\
				}while(0)
#define LED1(x) do{x?\
				HAL_GPIO_WritePin (GPIOF ,LED1_Pin,GPIO_PIN_SET ):\
				HAL_GPIO_WritePin (GPIOF ,LED1_Pin,GPIO_PIN_RESET );\
				}while(0)
#define BEEP_TOGGLE() do{ HAL_GPIO_TogglePin(BEEP_GPIO_Port,BEEP_Pin);}while(0)
#define LED0_TOGGLE() do{ HAL_GPIO_TogglePin(LED0_GPIO_Port,LED0_Pin);}while(0)
#define LED1_TOGGLE() do{ HAL_GPIO_TogglePin(LED1_GPIO_Port,LED1_Pin);}while(0)


#endif

