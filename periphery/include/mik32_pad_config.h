#ifndef PAD_CONFIG_H_INCLUDED
#define PAD_CONFIG_H_INCLUDED

#define PAD_CFG_MODE_LEN 2
#define PAD_CFG_MODE0 0x00
#define PAD_CFG_MODE1 0x01
#define PAD_CFG_MODE2 0x02
#define PAD_CFG_MODE3 0x03

#define PAD_DS_LEN 2
#define PAD_DS_2MA 0x00
#define PAD_DS_4MA 0x01
#define PAD_DS_8MA 0x02
#define PAD_DS_16MA 0x03 // TODO: check datasheet

#define PAD_PUPD_LEN 2
#define PAD_PUPD_OFF 0x00
#define PAD_PUPD_UP 0x01
#define PAD_PUPD_DOWN 0x02

#ifndef _ASSEMBLER_
#include <inttypes.h>

typedef struct
{
    volatile uint32_t PORT0_CFG;
    volatile uint32_t PORT1_CFG;
    volatile uint32_t PORT2_CFG;
    volatile uint32_t PORT0_DS;
    volatile uint32_t PORT1_DS;
    volatile uint32_t PORT2_DS;
    volatile uint32_t PORT0_PUPD;
    volatile uint32_t PORT1_PUPD;
    volatile uint32_t PORT2_PUPD;
} PAD_CONFIG_TypeDef;

#endif

#endif // PAD_CONFIG_H_INCLUDED