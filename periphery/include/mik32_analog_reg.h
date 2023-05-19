#ifndef ANALOG_REG_H_INCLUDED
#define ANALOG_REG_H_INCLUDED

#define DAC_CFG_EN18_BIT 0
#define DAC_CFG_RESN_BIT 1
#define DAC_CFG_DIV_BIT 2
#define DAC_CFG_EXTEN_BIT 10
#define DAC_EXTPAD_EN_BIT 11

#define DAC_CFG_EN18_M (1 << DAC_CFG_EN18_BIT)
#define DAC_CFG_RESN_M (1 << DAC_CFG_RESN_BIT)
#define DAC_CFG_DIV_M (0xFF << DAC_CFG_DIV_BIT)
#define DAC_CFG_DIV(v) (((v) << DAC_CFG_DIV_BIT) & DAC_CFG_DIV_M)
#define DAC_CFG_EXTEN_M (1 << DAC_CFG_EXTEN_BIT)

#define TSENS_NPD_BIT 0
#define TSENS_NPD_CLK_BIT 1
#define TSENS_NRST_BIT 2
#define TSENS_TRIM_BIT 3
#define TSENS_DIV_BIT 13

#define TSENS_IRQ_EOS_BIT 3
#define TSENS_IRQ_HI_BIT 4
#define TSENS_IRQ_LOW_BIT 5
#define TSENS_IRQ_MASK_EOS_BIT 0
#define TSENS_IRQ_MASK_HI_BIT 1
#define TSENS_IRQ_MASK_LOW_BIT 2

#define TSENS_IRQ_CLEAR_EOS_BIT 0
#define TSENS_IRQ_CLEAR_HI_BIT 1
#define TSENS_IRQ_CLEAR_LOW_BIT 2

#define TSENS_HI_THRESHOLD_BIT 0
#define TSENS_LOW_THRESHOLD_BIT 10

#define TSENS_VALUE(i) (uint32_t)((i + 273.15) * 1024 / 619.2)

#define ADC_CONFIG_EN_BIT 0
#define ADC_CONFIG_RESET_BIT 1
#define ADC_CONFIG_EXTREF_BIT 2
#define ADC_CONFIG_EXTPAD_EN_BIT 3
#define ADC_CONFIG_SEL_BIT 4
#define ADC_CONFIG_COS_BIT 7

#define ADC_CONFIG_EN (1 << ADC_CONFIG_EN_BIT)
#define ADC_CONFIG_RESET_N (1 << ADC_CONFIG_RESET_BIT)
#define ADC_CONFIG_EXTREF (1 << ADC_CONFIG_EXTREF_BIT)
#define ADC_CONFIG_EXTCLB (1 << ADC_CONFIG_EXTPAD_EN_BIT)
#define ADC_CONFIG_COS (1 << ADC_CONFIG_COS_BIT)

#define REF_CLB_VCOEF_BIT 0
#define REF_CLB_ICOEF_BIT 4
#define REF_CLB_EN_BIT 8

#define TEST_DIG_MUX_COV_LDO_M (0 << 9)
#define TEST_DIG_MUX_BATON_M (1 << 9)
#define TEST_DIG_MUX_BOR_M (2 << 9)
#define TEST_DIG_MUX_PGL_BU_M (3 << 9)
#define TEST_DIG_MUX_POR_M (4 << 9)
#define TEST_DIG_MUX_BGO_M (5 << 9)
#define TEST_DIG_MUX_PGL_M (6 << 9)

#define ADC_CHANNEL0 0
#define ADC_CHANNEL1 1
#define ADC_CHANNEL2 2
#define ADC_CHANNEL3 3
#define ADC_CHANNEL4 4
#define ADC_CHANNEL5 5
#define ADC_CHANNEL6 6
#define ADC_CHANNEL7 7

#ifndef _ASSEMBLER_
#include <inttypes.h>

typedef struct
{
    volatile uint32_t CFG;
    volatile uint32_t VALUE;
} DAC_TypeDef;

typedef struct
{
    volatile DAC_TypeDef DAC0;
    volatile DAC_TypeDef DAC1;
    volatile uint32_t DPF_VALUE;
    volatile uint32_t PVD_CONFIG;
    volatile uint32_t PVD_STATUS;
    volatile uint32_t TSENS_CONFIG;
    volatile uint32_t TSENS_THRESHOLD;
    volatile uint32_t TSENS_IRQ;
    volatile uint32_t TSENS_CLEAR_IRQ;
    volatile uint32_t TSENS_VALUE;
    volatile uint32_t TSENS_SINGLE;
    volatile uint32_t TSENS_CONTINIUS;
    volatile uint32_t REFV_CONFIG;
    volatile uint32_t ADC_CONFIG;
    volatile uint32_t ADC_CONTINIUS;
    volatile uint32_t ADC_SINGLE;
    volatile uint32_t ADC_VALID;
    volatile uint32_t ADC_VALUE;
    volatile uint32_t TEST_MUX;
} ADC_TypeDef;

#endif

#endif // ANALOG_REG_H_INCLUDED
