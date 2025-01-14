#ifndef __DMA_H__
#define __DMA_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "UltraSoundDrv.h"

typedef enum {
    DMA_ERROR_NO_ERRORS = 0x00,
    DMA_ERROR_ENABLED_BEFORE_INIT = 0x01,
    DMA_ERROR_INTERRUPTS_NOT_CLEARED = 0x02,
    DMA_ERROR_INTERRUPT_TRANSFER_ERROR = 0x03
} DMA_ERROR;

DMA_ERROR DMA_GetError(void);
uint8_t DMA_GetTransferStatus(void);
void DMA_SetTransferStatus(uint8_t new_status);
void DMA_InitPeriph(uint16_t* memory0_address);
void DMA_EnablePeriph(void);
void DMA_DisablePeriph(void);

#ifdef __cplusplus
}
#endif

#endif // __DMA_H__