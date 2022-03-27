/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32g0xx_hal.h"

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
#define RELEASE_Pin GPIO_PIN_11
#define RELEASE_GPIO_Port GPIOC
#define MOTOR_Pin GPIO_PIN_12
#define MOTOR_GPIO_Port GPIOC
#define TEST_Pin GPIO_PIN_13
#define TEST_GPIO_Port GPIOC
#define CHANNEL_IA_Pin GPIO_PIN_0
#define CHANNEL_IA_GPIO_Port GPIOA
#define CHANNEL_IB_Pin GPIO_PIN_1
#define CHANNEL_IB_GPIO_Port GPIOA
#define CHANNEL_IC_Pin GPIO_PIN_2
#define CHANNEL_IC_GPIO_Port GPIOA
#define CHANNEL_IL_Pin GPIO_PIN_3
#define CHANNEL_IL_GPIO_Port GPIOA
#define CHANNEL_UA_Pin GPIO_PIN_4
#define CHANNEL_UA_GPIO_Port GPIOA
#define CHANNEL_UB_Pin GPIO_PIN_5
#define CHANNEL_UB_GPIO_Port GPIOA
#define CHANNEL_UC_Pin GPIO_PIN_6
#define CHANNEL_UC_GPIO_Port GPIOA
#define CHANNEL_T_Pin GPIO_PIN_7
#define CHANNEL_T_GPIO_Port GPIOA
#define CLOSE_Pin GPIO_PIN_0
#define CLOSE_GPIO_Port GPIOB
#define OPEN_Pin GPIO_PIN_1
#define OPEN_GPIO_Port GPIOB
#define KEY_CLOSE_Pin GPIO_PIN_2
#define KEY_CLOSE_GPIO_Port GPIOB
#define KEY_OPEN_Pin GPIO_PIN_10
#define KEY_OPEN_GPIO_Port GPIOB
#define KEY_ENTER_Pin GPIO_PIN_11
#define KEY_ENTER_GPIO_Port GPIOB
#define KEY_BACK_Pin GPIO_PIN_12
#define KEY_BACK_GPIO_Port GPIOB
#define KEY_INC_Pin GPIO_PIN_13
#define KEY_INC_GPIO_Port GPIOB
#define KEY_DEC_Pin GPIO_PIN_14
#define KEY_DEC_GPIO_Port GPIOB
#define KEY_TEST_Pin GPIO_PIN_15
#define KEY_TEST_GPIO_Port GPIOB
#define BREAK_ZERO_Pin GPIO_PIN_8
#define BREAK_ZERO_GPIO_Port GPIOA
#define CONTECT_Pin GPIO_PIN_9
#define CONTECT_GPIO_Port GPIOA
#define LCM_LEDA_Pin GPIO_PIN_3
#define LCM_LEDA_GPIO_Port GPIOD
#define LCM_SI_Pin GPIO_PIN_4
#define LCM_SI_GPIO_Port GPIOD
#define LCM_SCK_Pin GPIO_PIN_5
#define LCM_SCK_GPIO_Port GPIOD
#define LCM_A0_Pin GPIO_PIN_6
#define LCM_A0_GPIO_Port GPIOD
#define LCM_RST_Pin GPIO_PIN_3
#define LCM_RST_GPIO_Port GPIOB
#define LCM_CS_Pin GPIO_PIN_4
#define LCM_CS_GPIO_Port GPIOB
#define AT24C256_SCL_Pin GPIO_PIN_8
#define AT24C256_SCL_GPIO_Port GPIOB
#define AT24C256_SDA_Pin GPIO_PIN_9
#define AT24C256_SDA_GPIO_Port GPIOB
#define AT24C256_WP_Pin GPIO_PIN_10
#define AT24C256_WP_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
