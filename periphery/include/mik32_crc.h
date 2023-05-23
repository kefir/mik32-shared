#ifndef CRC_H_INCLUDED
#define CRC_H_INCLUDED

#define CRC_DATA_OFFSET 0x00
#define CRC_POLY_OFFSET 0x04
#define CRC_CTRL_OFFSET 0x08

#define CRC_CTRL_BUSY_BIT 0
#define CRC_CTRL_TCRC_BIT 24
#define CRC_CTRL_WAS_BIT 25
#define CRC_CTRL_FXOR_BIT 26
#define CRC_CTRL_TOTR_BIT 28
#define CRC_CTRL_TOT_BIT 30

#define CRC_CTRL_TOT (3 << CRC_CTRL_TOT_BIT)
#define CRC_CTRL_TOT_NONE (0 << CRC_CTRL_TOT_BIT)
#define CRC_CTRL_TOT_BITS (1 << CRC_CTRL_TOT_BIT)
#define CRC_CTRL_TOT_BITS_BYTES (2 << CRC_CTRL_TOT_BIT)
#define CRC_CTRL_TOT_BYTES (3 << CRC_CTRL_TOT_BIT)
#define CRC_CTRL_TOTR (3 << CRC_CTRL_TOTR_BIT)
#define CRC_CTRL_TOTR_NONE (0 << CRC_CTRL_TOTR_BIT)
#define CRC_CTRL_TOTR_BITS (1 << CRC_CTRL_TOTR_BIT)
#define CRC_CTRL_TOTR_BITS_BYTES (2 << CRC_CTRL_TOTR_BIT)
#define CRC_CTRL_TOTR_BYTES (3 << CRC_CTRL_TOTR_BIT)
#define CRC_CTRL_FXOR (1 << CRC_CTRL_FXOR_BIT)
#define CRC_CTRL_WAS (1 << CRC_CTRL_WAS_BIT)
#define CRC_CTRL_TCRC (1 << CRC_CTRL_TCRC_BIT)
#define CRC_CTRL_TCRC_16 (0 << CRC_CTRL_TCRC_BIT)
#define CRC_CTRL_TCRC_32 (1 << CRC_CTRL_TCRC_BIT)
#define CRC_CTRL_BUSY (1 << CRC_CTRL_BUSY_BIT)

#ifndef _ASSEMBLER_
#include <inttypes.h>

typedef struct
{
    union {
        volatile uint8_t DATA8;
        volatile uint16_t DATA16;
        volatile uint32_t DATA32;
    };
    volatile uint32_t POLY;
    volatile uint32_t CTRL;
} CRC_TypeDef;

#endif

#endif // CRC_H_INCLUDED
