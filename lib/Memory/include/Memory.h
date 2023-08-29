#ifndef EMULATOR6502_MEMORY_H
#define EMULATOR6502_MEMORY_H

#include "stdint.h"

#define MAX_MEM (1024 * 64)

void Mem_init (void);

uint8_t Mem_readByte(uint16_t addr);

#endif //EMULATOR6502_MEMORY_H
