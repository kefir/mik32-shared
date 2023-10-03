#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

#define UART_CR1_UE_BIT       0
#define UART_CR1_RE_BIT       2
#define UART_CR1_TE_BIT       3
#define UART_CR1_IDLEIE_BIT   4
#define UART_CR1_RXNEIE_BIT   5
#define UART_CR1_TCIE_BIT     6
#define UART_CR1_TXEIE_BIT    7
#define UART_CR1_PEIE_BIT     8
#define UART_CR1_PS_BIT       9
#define UART_CR1_PCE_BIT      10
#define UART_CR1_M0_BIT       12
#define UART_CR1_M1_BIT       28

#define UART_CR1_M1           (1 << UART_CR1_M1_BIT)
#define UART_CR1_M0           (1 << UART_CR1_M0_BIT)
#define UART_CR1_M_8BIT       (0)
#define UART_CR1_M_9BIT       (UART_CR1_M0)
#define UART_CR1_M_7BIT       (UART_CR1_M1)
#define UART_CR1_PCE          (1 << UART_CR1_PCE_BIT)
#define UART_CR1_PS           (1 << UART_CR1_PS_BIT)
#define UART_CR1_PEIE         (1 << UART_CR1_PEIE_BIT)
#define UART_CR1_TXEIE        (1 << UART_CR1_TXEIE_BIT)
#define UART_CR1_TCIE         (1 << UART_CR1_TCIE_BIT)
#define UART_CR1_RXNEIE       (1 << UART_CR1_RXNEIE_BIT)
#define UART_CR1_IDLEIE       (1 << UART_CR1_IDLEIE_BIT)
#define UART_CR1_TE           (1 << UART_CR1_TE_BIT)
#define UART_CR1_RE           (1 << UART_CR1_RE_BIT)
#define UART_CR1_UE           (1 << UART_CR1_UE_BIT)

#define UART_CR2_LBDIE_BIT    6
#define UART_CR2_LBCL_BIT     8
#define UART_CR2_CPHA_BIT     9
#define UART_CR2_CPOL_BIT     10
#define UART_CR2_CLKEN_BIT    11
#define UART_CR2_BITTOP_1_BIT 13
#define UART_CR2_LBM_BIT      14
#define UART_CR2_BITWAP_BIT   15
#define UART_CR2_RXINV_BIT    16
#define UART_CR2_TXINV_BIT    17
#define UART_CR2_DATAINV_BIT  18
#define UART_CR2_MSBFIRST_BIT 19

#define UART_CR2_MSBFIRST     (1 << UART_CR2_MSBFIRST_BIT)
#define UART_CR2_DATAINV      (1 << UART_CR2_DATAINV_BIT)
#define UART_CR2_TXINV        (1 << UART_CR2_TXINV_BIT)
#define UART_CR2_RXINV        (1 << UART_CR2_RXINV_BIT)
#define UART_CR2_BITWAP       (1 << UART_CR2_BITWAP_BIT)
#define UART_CR2_LBM          (1 << UART_CR2_LBM_BIT)
#define UART_CR2_BITTOP_1     (1 << UART_CR2_BITTOP_1_BIT)
#define UART_CR2_CLKEN        (1 << UART_CR2_CLKEN_BIT)
#define UART_CR2_CPOL         (1 << UART_CR2_CPOL_BIT)
#define UART_CR2_CPHA         (1 << UART_CR2_CPHA_BIT)
#define UART_CR2_LBCL         (1 << UART_CR2_LBCL_BIT)
#define UART_CR2_LBDIE        (1 << UART_CR2_LBDIE_BIT)

#define UART_CR3_EIE_BIT      0
#define UART_CR3_IREN_BIT     1
#define UART_CR3_BKRQ_BIT     2
#define UART_CR3_HDSEL_BIT    3
#define UART_CR3_DMAR_BIT     6
#define UART_CR3_DMAT_BIT     7
#define UART_CR3_RTSE_BIT     8
#define UART_CR3_CTSE_BIT     9
#define UART_CR3_CTSIE_BIT    10
#define UART_CR3_OVRDIS_BIT   12

#define UART_CR3_OVRDIS       (1 << UART_CR3_OVRDIS_BIT)
#define UART_CR3_CTSIE        (1 << UART_CR3_CTSIE_BIT)
#define UART_CR3_CTSE         (1 << UART_CR3_CTSE_BIT)
#define UART_CR3_RTSE         (1 << UART_CR3_RTSE_BIT)
#define UART_CR3_DMAT         (1 << UART_CR3_DMAT_BIT)
#define UART_CR3_DMAR         (1 << UART_CR3_DMAR_BIT)
#define UART_CR3_HDSEL        (1 << UART_CR3_HDSEL_BIT)
#define UART_CR3_BKRQ         (1 << UART_CR3_BKRQ_BIT)
#define UART_CR3_IREN         (1 << UART_CR3_IREN_BIT)
#define UART_CR3_EIE          (1 << UART_CR3_EIE_BIT)

#define UART_FLAGS_PE_BIT     0
#define UART_FLAGS_FE_BIT     1
#define UART_FLAGS_NF_BIT     2
#define UART_FLAGS_ORE_BIT    3
#define UART_FLAGS_IDLE_BIT   4
#define UART_FLAGS_RXNE_BIT   5
#define UART_FLAGS_TC_BIT     6
#define UART_FLAGS_TXE_BIT    7
#define UART_FLAGS_LBDF_BIT   8
#define UART_FLAGS_CTSIF_BIT  9
#define UART_FLAGS_CTS_BIT    10
#define UART_FLAGS_BUSY_BIT   16
#define UART_FLAGS_TEACK_BIT  21
#define UART_FLAGS_REACK_BIT  22

#define UART_FLAGS_REACK      (1 << UART_FLAGS_REACK_BIT)
#define UART_FLAGS_TEACK      (1 << UART_FLAGS_TEACK_BIT)
#define UART_FLAGS_BUSY       (1 << UART_FLAGS_BUSY_BIT)
#define UART_FLAGS_CTS        (1 << UART_FLAGS_CTS_BIT)
#define UART_FLAGS_CTSIF      (1 << UART_FLAGS_CTSIF_BIT)
#define UART_FLAGS_LBDF       (1 << UART_FLAGS_LBDF_BIT)
#define UART_FLAGS_TXE        (1 << UART_FLAGS_TXE_BIT)
#define UART_FLAGS_TC         (1 << UART_FLAGS_TC_BIT)
#define UART_FLAGS_RXNE       (1 << UART_FLAGS_RXNE_BIT)
#define UART_FLAGS_IDLE       (1 << UART_FLAGS_IDLE_BIT)
#define UART_FLAGS_ORE        (1 << UART_FLAGS_ORE_BIT)
#define UART_FLAGS_NF         (1 << UART_FLAGS_NF_BIT)
#define UART_FLAGS_FE         (1 << UART_FLAGS_FE_BIT)
#define UART_FLAGS_PE         (1 << UART_FLAGS_PE_BIT)

#define UART_MODEM_DSRIF_BIT  1
#define UART_MODEM_RIIF_BIT   2
#define UART_MODEM_DCDIF_BIT  3
#define UART_MODEM_DSR_BIT    5
#define UART_MODEM_RI_BIT     6
#define UART_MODEM_DCD_BIT    7
#define UART_MODEM_DTR_BIT    8

#define UART_MODEM_DTR        (1 << UART_MODEM_DTR_BIT)
#define UART_MODEM_DCD        (1 << UART_MODEM_DCD_BIT)
#define UART_MODEM_RI         (1 << UART_MODEM_RI_BIT)
#define UART_MODEM_DSR        (1 << UART_MODEM_DSR_BIT)
#define UART_MODEM_DCDIF      (1 << UART_MODEM_DCDIF_BIT)
#define UART_MODEM_RIIF       (1 << UART_MODEM_RIIF_BIT)
#define UART_MODEM_DSRIF      (1 << UART_MODEM_DSRIF_BIT)

#ifndef _ASSEMBLER_
#include <inttypes.h>

typedef struct
{
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t CR3;
    volatile uint32_t DIV;
    volatile uint32_t _reserved0;
    volatile uint32_t _reserved1;
    volatile uint32_t _reserved2;
    volatile uint32_t FLAGS;
    volatile uint32_t _reserved3;
    volatile uint32_t RXDATA;
    volatile uint32_t TXDATA;
    volatile uint32_t MODEM;
} UART_TypeDef;
#endif

#endif // UART_H_INCLUDED
