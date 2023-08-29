#include <assert.h>
#include "Memory.h"
#include "stdlib.h"
#include "string.h"

static uint8_t Data[MAX_MEM];

void Mem_init(void) {
    memset(Data, 0, sizeof Data);
}

uint8_t Mem_readByte(uint16_t addr) {
    return Data[addr];
}