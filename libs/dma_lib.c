
#include "dma_lib.h"

void DMA_StartNewTask(DMA_CONFIG_TypeDef* dma, uint32_t channel_index,
    uint32_t control_value,
    uint32_t source_address, uint32_t destination_address, uint32_t length)
{

    dma->CHANNELS[channel_index].SOURCE = source_address;
    dma->CHANNELS[channel_index].DESTINATIONS = destination_address;
    dma->CHANNELS[channel_index].LEN = length;
    dma->CHANNELS[channel_index].CONFIG = control_value | DMA_CFG_CH_ENABLE_M;
}

void DMA_Wait(DMA_CONFIG_TypeDef* dma, uint32_t channel_index)
{

    uint32_t channel_bits = 0;

    while ((dma->CONTROL & ((1 << channel_index) << DMA_STATUS_READY_S)) == 0)
        ;
}
