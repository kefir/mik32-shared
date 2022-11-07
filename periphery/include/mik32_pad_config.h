#ifndef PAD_CONFIG_H_INCLUDED
#define PAD_CONFIG_H_INCLUDED




#ifndef _ASSEMBLER_
    #include <inttypes.h>

    typedef struct
    {
        volatile uint32_t PORT_0_CFG;                 
        volatile uint32_t PORT_1_CFG;               
        volatile uint32_t PORT_2_CFG;
        volatile uint32_t PORT_0_DS;
        volatile uint32_t PORT_1_DS;
        volatile uint32_t PORT_2_DS;
        volatile uint32_t PORT_0_PUD;
        volatile uint32_t PORT_1_PUD;
        volatile uint32_t PORT_2_PUD;
    } PAD_CONFIG_TypeDef;

#endif

#endif // PAD_CONFIG_H_INCLUDED