/**
  ******************************************************************************
  * File Name          : srv_watchdog.c
  * Description        : This file provides code for FreeRTOS Watchdog service
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "freertos_srv.h"

/* Local variables -----------------------------------------------------------*/
static xTimerHandle xWatchdogRechargeTimer = NULL;

/* Function prototypes -------------------------------------------------------*/
static void prvWatchdogRecharge(xTimerHandle);





/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

/**
  * @brief  Provides FreeRTOS Watchdog service.
  * @return None
  */
void srvWatchdog(void) {
  
  xWatchdogRechargeTimer = xTimerCreate("WatchdogRechargeTimer", (1000/portTICK_RATE_MS), pdTRUE, (void*)0, prvWatchdogRecharge);

  xTimerStart(xWatchdogRechargeTimer, 0);
}


/**
  * @brief  Recharges Watchdog counter.
  * @return None
  */
static void prvWatchdogRecharge(xTimerHandle xTimer) {
  WRITE_REG(IWDG->KR, IWDG_KEY_RELOAD);
}

/*************************** © Zoo IPS, 2021 **********************************/
