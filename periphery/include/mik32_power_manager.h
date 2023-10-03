#ifndef PM_H_INCLUDED
#define PM_H_INCLUDED

#define PM_DIV_AHB_OFFSET          0x00
#define PM_DIV_APB_M_OFFSET        0x04
#define PM_DIV_APB_P_OFFSET        0x08
#define PM_CLK_AHB_SET_OFFSET      0x0C
#define PM_CLK_AHB_CLEAR_OFFSET    0x10
#define PM_CLK_APB_M_SET_OFFSET    0x14
#define PM_CLK_APB_M_CLEAR_OFFSET  0x18
#define PM_CLK_APB_P_SET_OFFSET    0x1C
#define PM_CLK_APB_P_CLEAR_OFFSET  0x20
#define PM_AHB_CLK_MUX_OFFSET      0x24
#define PM_WDT_CLK_MUX_OFFSET      0x28
#define PM_CPU_RTC_CLK_MUX_OFFSET  0x2C

#define PM_AHB_CLK_MUX_BIT         0

#define PM_AHB_CLK_MUX_OSC32M      (0x0 << PM_AHB_CLK_MUX_BIT)
#define PM_AHB_CLK_MUX_HSI32M      (0x1 << PM_AHB_CLK_MUX_BIT)
#define PM_AHB_CLK_MUX_OSC32K      (0x2 << PM_AHB_CLK_MUX_BIT)
#define PM_AHB_CLK_MUX_LSI32K      (0x3 << PM_AHB_CLK_MUX_BIT)

#define PM_TIMER_CFG_M             (timer_index)(0x7 << (timer_index))

#define PM_FREQ_STATUS_LSI32K_BIT  0
#define PM_FREQ_STATUS_EXT32K_BIT  1
#define PM_FREQ_STATUS_HSI32M_BIT  2
#define PM_FREQ_STATUS_EXT32M_BIT  3

#define PM_FREQ_STATUS_EXT32M      (1  << PM_FREQ_STATUS_EXT32M_BIT)
#define PM_FREQ_STATUS_HSI32M      (1  << PM_FREQ_STATUS_HSI32M_BIT)
#define PM_FREQ_STATUS_EXT32K      (1  << PM_FREQ_STATUS_EXT32K_BIT)
#define PM_FREQ_STATUS_LSI32K      (1  << PM_FREQ_STATUS_LSI32K_BIT)

#define PM_FREQ_MASK_LSI32K_BIT    0
#define PM_FREQ_MASK_EXT32K_BIT    1
#define PM_FREQ_MASK_HSI32M_BIT    2
#define PM_FREQ_MASK_EXT32M_BIT    3
#define PM_FREQ_MASK_FORCE_DIV_BIT 4

#ifndef _ASSEMBLER_
#include <inttypes.h>
typedef struct
{
    volatile uint32_t DIV_AHB;
    volatile uint32_t DIV_APB_M;
    volatile uint32_t DIV_APB_P;
    volatile uint32_t CLK_AHB_SET;
    volatile uint32_t CLK_AHB_CLEAR;
    volatile uint32_t CLK_APB_M_SET;
    volatile uint32_t CLK_APB_M_CLEAR;
    volatile uint32_t CLK_APB_P_SET;
    volatile uint32_t CLK_APB_P_CLEAR;
    volatile uint32_t AHB_CLK_MUX;
    volatile uint32_t WDT_CLK_MUX;
    volatile uint32_t CPU_RTC_CLK_MUX;
    volatile uint32_t TIMER_CFG;
    volatile uint32_t FREQ_MASK;
    volatile uint32_t FREQ_STATUS;
    volatile uint32_t SLEEP_MODE;
} PM_TypeDef;
#endif

#endif
