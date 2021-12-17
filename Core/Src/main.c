/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Global variables ---------------------------------------------------------*/
uint32_t SystemCoreClock      = 16000000;
RCC_ClocksTypeDef RccClocks;

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/





/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

/**
  * @brief  The application entry point.
  * @return int
  */
int main(void) {
  Delay(500);
  
  /* ----------------------------------------- */
  /* ---          Run peripherals          --- */
  /* ----------------------------------------- */

  /* LED */
  LED_Init();
  /* EXTI */
  EXTI_Init();
  /* USART1 */ 
  USART1_Init();
  /* SPI5 */
  SPI5_Init();
  /* I2C3 */
  I2C3_Init();
  /* Basic Timer7 */
  BasicTimer7_Init();
  /* RTC */
  RTC_Init();
  /* FMC */
  FMC_Init(_SDRAM);
  /* DMA2D */
  DMA2D_Init();
  /* LTDC */
  LTDC_Init();
  /* Touchscreen STMPE811 */
  PE811_Init();
  /* MEMS Hyroscope */
  L3GD20_Init();

  /* -------------------------------------- */
  /* ---          Run FreeRTOS          --- */
  /* -------------------------------------- */
  FreeRTOS_Run();

  while (1);
}


/**
  * @brief  Initializes clocks and peripherals.
  * @return None
  */
void SystemInit(void) {
  
  #if (INSTRUCTION_CACHE_ENABLE != 0U)
    PREG_SET(FLASH->ACR, FLASH_ACR_ICEN_Pos);
  #endif /* INSTRUCTION_CACHE_ENABLE */
 
  #if (DATA_CACHE_ENABLE != 0U)
    PREG_SET(FLASH->ACR, FLASH_ACR_DCEN_Pos);
  #endif /* DATA_CACHE_ENABLE */
  
  #if (PREFETCH_ENABLE != 0U)
    PREG_SET(FLASH->ACR, FLASH_ACR_PRFTEN_Pos);
  #endif /* PREFETCH_ENABLE */

  NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);

  /* SysCfg */
  PREG_SET(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN_Pos);
  while (!(PREG_CHECK(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN_Pos)));

  /* PWR */
  PREG_SET(RCC->APB1ENR, RCC_APB1ENR_PWREN_Pos);
  while (!(PREG_CHECK(RCC->APB1ENR, RCC_APB1ENR_PWREN_Pos)))

  /* FLASH_IRQn interrupt configuration */
  NVIC_SetPriority(FLASH_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
  NVIC_EnableIRQ(FLASH_IRQn);

  /* RCC_IRQn interrupt configuration */
  NVIC_SetPriority(RCC_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
  NVIC_EnableIRQ(RCC_IRQn);

  MODIFY_REG(FLASH->ACR, FLASH_ACR_LATENCY, FLASH_ACR_LATENCY_5WS);

  if (READ_BIT(FLASH->ACR, FLASH_ACR_LATENCY) != FLASH_ACR_LATENCY_5WS) {
    Error_Handler();
  }
  
  /* Enable overdrive */
  MODIFY_REG(PWR->CR, PWR_CR_VOS, (PWR_CR_VOS_0 | PWR_CR_VOS_1));
  PREG_SET(PWR->CR, PWR_CR_ODEN_Pos);  
  
  /* HSE enable and wait until it's ready */
  PREG_SET(RCC->CR, RCC_CR_HSEON_Pos);
  while(!(PREG_CHECK(RCC->CR, RCC_CR_HSERDY_Pos)));
  
  /* LSI enable and wait until it's ready */
  PREG_SET(RCC->CSR, RCC_CSR_LSION_Pos);
  while(!(PREG_CHECK(RCC->CSR, RCC_CSR_LSIRDY_Pos)));

  /* Backup registers enable access */
  PREG_SET(PWR->CR, PWR_CR_DBP_Pos);

  /* force backup domain reset */
  PREG_SET(RCC->BDCR, RCC_BDCR_BDRST_Pos);
  PREG_CLR(RCC->BDCR, RCC_BDCR_BDRST_Pos);
  
  /* LSE enable and wait until it's ready */
  PREG_SET(RCC->BDCR, RCC_BDCR_LSEON_Pos);
  // PREG_CLR(RCC->BDCR, RCC_BDCR_LSEON_Pos);
  while(!(PREG_CHECK(RCC->BDCR, RCC_BDCR_LSERDY_Pos)));

  /* RTC source is LSE */
  MODIFY_REG(RCC->BDCR, RCC_BDCR_RTCSEL, RCC_BDCR_RTCSEL_0);
  /* RTC source is LSI */
  // MODIFY_REG(RCC->BDCR, RCC_BDCR_RTCSEL_Msk, RCC_BDCR_RTCSEL_1);

  /* Enable RTC */
  PREG_SET(RCC->BDCR, RCC_BDCR_RTCEN_Pos);

  /* Configure PLL domain end prescaller */
  MODIFY_REG(RCC->PLLCFGR, (RCC_PLLCFGR_PLLSRC | RCC_PLLCFGR_PLLM | RCC_PLLCFGR_PLLN), (RCC_PLLCFGR_PLLSRC_HSE | RCC_PLLCFGR_PLLM_2 | 180 << RCC_PLLCFGR_PLLN_Pos));
  /* PLL divided into two */
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLP, 0U);
  
  /* PLL enable and wait until it's ready */
  PREG_SET(RCC->CR, RCC_CR_PLLON_Pos);
  while (!(PREG_CHECK(RCC->CR, RCC_CR_PLLRDY_Pos)));


  /* AHB isn't divided */
  // MODIFY_REG(RCC->CFGR, RCC_CFGR_HPRE, LL_RCC_SYSCLK_DIV_1);
  /* APB1 divided by 4 */
  MODIFY_REG(RCC->CFGR, RCC_CFGR_PPRE1, RCC_CFGR_PPRE1_DIV4);
  /* APB2 divided by 2 */
  MODIFY_REG(RCC->CFGR, RCC_CFGR_PPRE2, RCC_CFGR_PPRE2_DIV2);

  /* Enable PLL as sysclock and wait until it's ready */
  MODIFY_REG(RCC->CFGR, RCC_CFGR_SW, RCC_CFGR_SW_PLL);
  while(!(READ_BIT(RCC->CFGR, RCC_CFGR_SWS) == RCC_CFGR_SWS_PLL));

  SystemCoreClock = 180000000U;
  RccClocks.HCLK_Freq = SystemCoreClock;
  RccClocks.PCLK1_Freq = 45000000U;
  RccClocks.PCLK1_Freq_Tim = 90000000U;
  RccClocks.PCLK2_Freq = 90000000U;
  RccClocks.PCLK2_Freq_Tim = 180000000U;


  /* Set timer prescaler */
  MODIFY_REG(RCC->DCKCFGR, RCC_DCKCFGR_TIMPRE, 0);

  /* Enable PLL SAI Domain */
  MODIFY_REG(RCC->PLLCFGR, (RCC_PLLCFGR_PLLSRC | RCC_PLLCFGR_PLLM), (RCC_PLLCFGR_PLLSRC_HSE | RCC_PLLCFGR_PLLM_2));
  MODIFY_REG(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIN | RCC_PLLSAICFGR_PLLSAIR, (60U << RCC_PLLSAICFGR_PLLSAIN_Pos | RCC_PLLSAICFGR_PLLSAIR_2 | RCC_PLLSAICFGR_PLLSAIR_0)); /*!< PLLSAI division factor for PLLSAIR output by 5 */
  /* PLLSAI division factor for PLLSAIDIVR output by 4 */
  MODIFY_REG(RCC->DCKCFGR, RCC_DCKCFGR_PLLSAIDIVR, RCC_DCKCFGR_PLLSAIDIVR_0);

  /* PLL SAI wait until it's ready */
  PREG_SET(RCC->CR, RCC_CR_PLLSAION_Pos);
  while (!(PREG_CHECK(RCC->CR, RCC_CR_PLLSAIRDY_Pos)));


/*----------------------------------------------------------------------------*/
  /* Freeze some peripherals for the debug purpose */
  #ifdef DEBUG
  SET_BIT(DBGMCU->APB1FZ, (
      DBGMCU_APB1_FZ_DBG_TIM7_STOP
    | DBGMCU_APB1_FZ_DBG_IWDG_STOP
    | DBGMCU_APB1_FZ_DBG_WWDG_STOP
  ));
  #endif

/*----------------------------------------------------------------------------*/
  /* IWDG Independent Watchdog approximately for 8 sec to recharge */
  WRITE_REG(IWDG->KR, IWDG_KEY_ENABLE);
  WRITE_REG(IWDG->KR, IWDG_KEY_WR_ACCESS_ENABLE);
  WRITE_REG(IWDG->PR, IWDG_PR_PR & (IWDG_PR_PR_2 | IWDG_PR_PR_0)); /*!< Divider by 128 */
  WRITE_REG(IWDG->RLR, IWDG_RLR_RL & 6624U);
  while (!(PREG_CHECK(IWDG->SR, IWDG_SR_PVU_Pos)));
  WRITE_REG(IWDG->KR, IWDG_KEY_RELOAD);

/*----------------------------------------------------------------------------*/
  /* Peripheral clock */
  /* APB1 */
  SET_BIT(RCC->APB1ENR, (
      RCC_APB1ENR_TIM7EN
    // | RCC_APB1ENR_I2C3EN
  ));

  /* AHB1 */
  SET_BIT(RCC->AHB1ENR, ( 
      RCC_AHB1ENR_GPIOAEN
    | RCC_AHB1ENR_GPIOBEN
    | RCC_AHB1ENR_GPIOCEN
    | RCC_AHB1ENR_GPIODEN
    | RCC_AHB1ENR_GPIOEEN
    | RCC_AHB1ENR_GPIOFEN
    | RCC_AHB1ENR_GPIOGEN
    | RCC_AHB1ENR_GPIOHEN
    | RCC_AHB1ENR_CRCEN
    | RCC_AHB1ENR_DMA2DEN
  ));

  /* APB2 */
  SET_BIT(RCC->APB2ENR, (
      RCC_APB2ENR_SPI5EN
    | RCC_APB2ENR_USART1EN
    | RCC_APB2ENR_LTDCEN
  ));

  /* AHB3 */
  SET_BIT(RCC->AHB3ENR, (
      RCC_AHB3ENR_FMCEN
  ));
  /* Wait for FMC starts */
  while (!(PREG_CHECK(RCC->AHB3ENR, RCC_AHB3ENR_FMCEN_Pos)));
}

/*************************** © Zoo IPS, 2021 **********************************/
