#ifndef SPIFI_H_INCLUDED
#define SPIFI_H_INCLUDED

#define SPIFI_CTRL_TIMEOUT_BIT 0
#define SPIFI_CTRL_CSHIGH_BIT 16
#define SPIFI_CTRL_CACHE_EN_BIT 20
#define SPIFI_CTRL_D_CACHE_DIS_BIT 21
#define SPIFI_CTRL_INTEN_BIT 22
#define SPIFI_CTRL_MODE3_BIT 23
#define SPIFI_CTRL_SCK_DIV_BIT 24
#define SPIFI_CTRL_PREFETCH_DIS_BIT 27
#define SPIFI_CTRL_DUAL_BIT 28
#define SPIFI_CTRL_RFCLK_BIT 29
#define SPIFI_CTRL_FBCLK_BIT 30
#define SPIFI_CTRL_DMAEN_BIT 31

#define SPIFI_CTRL_TIMEOUT_M (0xFFFF << SPIFI_CTRL_TIMEOUT_BIT)
#define SPIFI_CTRL_TIMEOUT(v) (((v) << SPIFI_CTRL_TIMEOUT_BIT) & SPIFI_CTRL_TIMEOUT_M)
#define SPIFI_CTRL_CSHIGH_M (0xF << SPIFI_CTRL_CSHIGH_BIT)
#define SPIFI_CTRL_CSHIGH(v) (((v) << SPIFI_CTRL_CSHIGH_BIT) & SPIFI_CTRL_CSHIGH_M)
#define SPIFI_CTRL_CACHE_EN (0x1 << SPIFI_CTRL_CACHE_EN_BIT)
#define SPIFI_CTRL_D_CACHE_DIS (0x1 << SPIFI_CTRL_D_CACHE_DIS_BIT)
#define SPIFI_CTRL_INTEN (0x1 << SPIFI_CTRL_INTEN_BIT)
#define SPIFI_CTRL_MODE3 (0x1 << SPIFI_CTRL_MODE3_BIT)
#define SPIFI_CTRL_SCK_DIV_M (0x7 << SPIFI_CTRL_SCK_DIV_BIT)
#define SPIFI_CTRL_SCK_DIV(v) (((v) << SPIFI_CTRL_SCK_DIV_BIT) & SPIFI_CTRL_SCK_DIV_M)
#define SPIFI_CTRL_PREFETCH_DIS (0x1 << SPIFI_CTRL_PREFETCH_DIS_BIT)
#define SPIFI_CTRL_DUAL (0x1 << SPIFI_CTRL_DUAL_BIT)
#define SPIFI_CTRL_RFCLK (0x1 << SPIFI_CTRL_RFCLK_BIT)
#define SPIFI_CTRL_FBCLK (0x1 << SPIFI_CTRL_FBCLK_BIT)
#define SPIFI_CTRL_DMAEN (0x1 << SPIFI_CTRL_DMAEN_BIT)

#define SPIFI_CMD_DATALEN_BIT 0
#define SPIFI_CMD_POLL_BIT 14
#define SPIFI_CMD_DOUT_BIT 15
#define SPIFI_CMD_INTLEN_BIT 16
#define SPIFI_CMD_FIELDFORM_BIT 19
#define SPIFI_CMD_FRAMEFORM_BIT 21
#define SPIFI_CMD_OPCODE_BIT 24

#define SPIFI_CMD_DATALEN_M (0x3FFF << SPIFI_CMD_DATALEN_BIT)
#define SPIFI_CMD_DATALEN(v) (((v) << SPIFI_CMD_DATALEN_BIT) & SPIFI_CMD_DATALEN_M)
#define SPIFI_CMD_POLL (0x1 << SPIFI_CMD_POLL_BIT)
#define SPIFI_CMD_DOUT (0x1 << SPIFI_CMD_DOUT_BIT)
#define SPIFI_CMD_INTLEN (0x7 << SPIFI_CMD_INTLEN_BIT)
#define SPIFI_CMD_FIELDFORM (0x3 << SPIFI_CMD_FIELDFORM_BIT)
#define SPIFI_CMD_FRAMEFORM (0x7 << SPIFI_CMD_FRAMEFORM_BIT)
#define SPIFI_CMD_OPCODE (0xFF << SPIFI_CMD_OPCODE_BIT)

#define SPIFI_CMD_DATALEN_BUSY_INDEX_BIT 0
#define SPIFI_CMD_DATALEN_BUSY_DONE_VALUE_BIT 3

#define SPIFI_CMD_FRAMEFORM_RESERVED 0
#define SPIFI_CMD_FRAMEFORM_OPCODE_NOADDR 1
#define SPIFI_CMD_FRAMEFORM_OPCODE_1ADDR 2
#define SPIFI_CMD_FRAMEFORM_OPCODE_2ADDR 3
#define SPIFI_CMD_FRAMEFORM_OPCODE_3ADDR 4
#define SPIFI_CMD_FRAMEFORM_OPCODE_4ADDR 5
#define SPIFI_CMD_FRAMEFORM_NOOPCODE_3ADDR 6
#define SPIFI_CMD_FRAMEFORM_NOOPCODE_4ADDR 7

#define SPIFI_CMD_FIELDFORM_ALL_SERIAL 0
#define SPIFI_CMD_FIELDFORM_DATA_PARALLEL 1
#define SPIFI_CMD_FIELDFORM_OPCODE_SERIAL 2
#define SPIFI_CMD_FIELDFORM_ALL_PARALLEL 3

#define SPIFI_MCMD_POLL_BIT 14
#define SPIFI_MCMD_DOUT_BIT 15
#define SPIFI_MCMD_INTLEN_BIT 16
#define SPIFI_MCMD_FIELDFORM_BIT 19
#define SPIFI_MCMD_FRAMEFORM_BIT 21
#define SPIFI_MCMD_OPCODE_BIT 24

#define SPIFI_MCMD_POLL (0x1 << SPIFI_MCMD_POLL_BIT)
#define SPIFI_MCMD_DOUT (0x1 << SPIFI_MCMD_DOUT_BIT)
#define SPIFI_MCMD_INTLEN (0x7 << SPIFI_MCMD_INTLEN_BIT)
#define SPIFI_MCMD_FIELDFORM (0x3 << SPIFI_MCMD_FIELDFORM_BIT)
#define SPIFI_MCMD_FRAMEFORM (0x7 << SPIFI_MCMD_FRAMEFORM_BIT)
#define SPIFI_MCMD_OPCODE (0xFF << SPIFI_MCMD_OPCODE_BIT)

#define SPIFI_STAT_MCINIT_BIT 0
#define SPIFI_STAT_CMD_BIT 1
#define SPIFI_STAT_RESET_BIT 4
#define SPIFI_STAT_INTRQ_BIT 5
#define SPIFI_STAT_VERSION_BIT 24

#define SPIFI_STAT_MCINIT (0x1 << SPIFI_STAT_MCINIT_BIT)
#define SPIFI_STAT_CMD (0x1 << SPIFI_STAT_CMD_BIT)
#define SPIFI_STAT_RESET (0x1 << SPIFI_STAT_RESET_BIT)
#define SPIFI_STAT_INTRQ (0x1 << SPIFI_STAT_INTRQ_BIT)
#define SPIFI_STAT_VERSION (0xFF << SPIFI_STAT_VERSION_BIT)

#ifndef _ASSEMBLER_
#include <inttypes.h>
typedef struct
{
    volatile uint32_t CTRL; // Offset: 0x000	//0
    volatile uint32_t CMD; // Offset: 0x004 //1
    volatile uint32_t ADDR; // Offset: 0x008 //2
    volatile uint32_t IDATA; // Offset: 0x00C	//3
    volatile uint32_t CLIMIT; // Offset: 0x010 //4
    union {
        volatile uint32_t DATA; // Offset: 0x014 //5
        volatile uint8_t DATA8;
        volatile uint16_t DATA16;
        volatile uint32_t DATA32;
    };
    volatile uint32_t MCMD; // Offset: 0x018 //6
    volatile uint32_t STAT; // Offset: 0x01C //7
} SPIFI_TypeDef;
#endif

#endif // SPIFI_H_INCLUDED
