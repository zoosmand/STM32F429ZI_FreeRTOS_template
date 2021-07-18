/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Define debug output to SWO */
#define SWO_ITM
// #define SWO_USART

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#include "stm32f4xx.h"

/* Private includes ----------------------------------------------------------*/
#include "common.h"
#include "stm32f4xx_it.h"
#include "led.h"
#include "exti.h"
#include "usart.h"
#include "spi.h"
#include "i2c.h"
#include "tim.h"
#include "rtc.h"
#include "fmc.h"
#include "dma2d.h"
#include "ltdc.h"
#include "fonts.h"
#include "display.h"
#include "ili9341.h"
#include "pe811.h"
#include "ts.h"
#include "l3gd20.h"
#include "mems.h"
#include "freertos.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "list.h"
#include "timers.h"

/* Global typedef ------------------------------------------------------------*/
struct __FILE {
  int handle;
  /* Whatever you require here. If the only file you are using is */
  /* standard output using printf() for debugging, no file handling */
  /* is required. */
};

/**
  * @brief  RCC Clocks Frequency Structure
  */
typedef struct {
  uint32_t HCLK_Freq;          /* HCLK clock frequency */
  uint32_t PCLK1_Freq;         /* PCLK1 clock frequency */
  uint32_t PCLK1_Freq_Tim;     /* PCLK1 clock frequency for timers */
  uint32_t PCLK2_Freq;         /* PCLK2 clock frequency */
  uint32_t PCLK2_Freq_Tim;     /* PCLK2 clock frequency for timers */
} RCC_ClocksTypeDef;


/* Exported types ------------------------------------------------------------*/

/* Exported varables ---------------------------------------------------------*/
extern RCC_ClocksTypeDef RccClocks;

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Private defines -----------------------------------------------------------*/



#define CCMRAM  __attribute__((section(".ccmram")))

/* Exported functions prototypes ---------------------------------------------*/
extern void Delay(uint32_t delay);
extern void Set_BitBandVal(uint32_t addr, uint32_t key);
extern uint32_t Get_BitBandVal(uint32_t addr);


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

