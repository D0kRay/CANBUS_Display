/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPIO_PC13_Pin GPIO_PIN_13
#define GPIO_PC13_GPIO_Port GPIOC
#define GPIO_PC0_Pin GPIO_PIN_0
#define GPIO_PC0_GPIO_Port GPIOC
#define GPIO_PC1_Pin GPIO_PIN_1
#define GPIO_PC1_GPIO_Port GPIOC
#define GPIO_PC3_Pin GPIO_PIN_3
#define GPIO_PC3_GPIO_Port GPIOC
#define GPIO_PC6_Pin GPIO_PIN_6
#define GPIO_PC6_GPIO_Port GPIOC
#define GPIO_PC7_Pin GPIO_PIN_7
#define GPIO_PC7_GPIO_Port GPIOC
#define GPIO_PC8_Pin GPIO_PIN_8
#define GPIO_PC8_GPIO_Port GPIOC
#define GPIO_PC9_Pin GPIO_PIN_9
#define GPIO_PC9_GPIO_Port GPIOC
#define GPIO_A8_Pin GPIO_PIN_8
#define GPIO_A8_GPIO_Port GPIOA
#define GPIO_PA15_Pin GPIO_PIN_15
#define GPIO_PA15_GPIO_Port GPIOA
#define GPIO_PC11_Pin GPIO_PIN_11
#define GPIO_PC11_GPIO_Port GPIOC
#define GPIO_PC12_Pin GPIO_PIN_12
#define GPIO_PC12_GPIO_Port GPIOC
#define GPIO_PD2_Pin GPIO_PIN_2
#define GPIO_PD2_GPIO_Port GPIOD
#define GPIO_PB4_Pin GPIO_PIN_4
#define GPIO_PB4_GPIO_Port GPIOB
#define GPIO_PB7_Pin GPIO_PIN_7
#define GPIO_PB7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
