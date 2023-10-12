#ifndef EPIC_H_INCLUDED
#define EPIC_H_INCLUDED


#define EPIC_MASK_EDGE_SET          0x00
#define EPIC_MASK_EDGE_CLEAR        0x04
#define EPIC_MASK_LEVEL_SET         0x08
#define EPIC_MASK_LEVEL_CLEAR       0x0C
#define EPIC_SW_SET                 0x10
#define EPIC_SW_CLEAR               0x14
#define EPIC_CLEAR                  0x18
#define EPIC_STATUS                 0x1C
#define EPIC_RAW_STATUS             0x20

#ifndef _ASSEMBLER_
    #include <inttypes.h>

    typedef struct
    {  
        volatile uint32_t MASK_EDGE_SET;        // 0x00
        volatile uint32_t MASK_EDGE_CLEAR;      // 0x04
        volatile uint32_t MASK_LEVEL_SET;       // 0x08
        volatile uint32_t MASK_LEVEL_CLEAR;     // 0x0C
        volatile uint32_t SW_SET;               // 0x10
        volatile uint32_t SW_CLEAR;             // 0x14
        volatile uint32_t CLEAR;                // 0x18
        volatile uint32_t STATUS;               // 0x1C
        volatile uint32_t RAW_STATUS;           // 0x20
    } EPIC_TypeDef;
#endif

#endif // EPIC_H_INCLUDED
