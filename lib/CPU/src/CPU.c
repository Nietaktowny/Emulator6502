#include "CPU.h"

Word PC;                    ///< The program counter is a 16 bit register which points to the next instruction to be executed.
Byte SP;                    ///< The stack pointer is an 8 bit register and holds the low 8 bits of the next free location on the stack.
Byte A;                     ///< The 8 bit accumulator is used all arithmetic and logical operations.
Byte X;                     ///< The 8 bit index register is most commonly used to hold counters or offsets for accessing memory.
Byte Y;                     ///< The Y register is similar to the X register.

void CPU_reset(void) {
}
