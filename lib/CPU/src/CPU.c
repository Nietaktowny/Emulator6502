#include <assert.h>
#include "CPU.h"


Word PC;                    ///< The program counter is a 16 bit register which points to the next instruction to be executed.
Byte SP;                    ///< The stack pointer is an 8 bit register and holds the low 8 bits of the next free location on the stack.
Byte A;                     ///< The 8 bit accumulator is used all arithmetic and logical operations.
Byte X;                     ///< The 8 bit index register is most commonly used to hold counters or offsets for accessing memory.
Byte Y;                     ///< The Y register is similar to the X register.

processor_status_t PS;

Byte* CPU_get_SP(void) {
    return &SP;
}

processor_status_t* CPU_get_PS(void) {
    return &PS;
}

Byte* CPU_get_register(char name) {
    if (name == 'A') {
        return &A;
    } else if (name == 'X') {
        return &X;
    } else if (name == 'Y') {
        return &Y;
    } else {
        return NULL;
    }
}

void CPU_reset(void) {
    //Cycle #0
    SP = 0x00;
    //Cycle #1
    PC = 0xFFFC;
    SP = 0xFF;
    assert(SP);
    PS.C = PS.D = PS.BC = PS.I = PS.N = PS.O = PS.Z = 0;
    A = X = Y = 0;
}
