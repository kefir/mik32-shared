#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

#define GPIO_STATE 0x00
#define GPIO_SET 0x00
#define GPIO_CLEAR 0x04
#define GPIO_DIRECTION_OUT 0x08
#define GPIO_DIRECTION_IN 0x0C
#define GPIO_OUTPUT 0x10
#define GPIO_CONTROL 0x14

#define GPIO_PIN_0 0
#define GPIO_PIN_1 1
#define GPIO_PIN_2 2
#define GPIO_PIN_3 3
#define GPIO_PIN_4 4
#define GPIO_PIN_5 5
#define GPIO_PIN_6 6
#define GPIO_PIN_7 7
#define GPIO_PIN_8 8
#define GPIO_PIN_9 9
#define GPIO_PIN_10 10
#define GPIO_PIN_11 11
#define GPIO_PIN_12 12
#define GPIO_PIN_13 13
#define GPIO_PIN_14 14
#define GPIO_PIN_15 15

#ifndef _ASSEMBLER_
#include <inttypes.h>

typedef struct
{
    volatile uint32_t SET;
    volatile uint32_t CLEAR;
    volatile uint32_t DIRECTION_OUT;
    volatile uint32_t DIRECTION_IN;
    volatile uint32_t OUTPUT;
    volatile uint32_t CONTROL;
} GPIO_TypeDef;

#endif

#endif
