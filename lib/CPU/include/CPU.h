#ifndef EMULATOR6502_CPU_H
#define EMULATOR6502_CPU_H
#include <stdint.h>
#include "Memory.h"

typedef uint8_t Byte;       ///< This type is used for 8 bits registers and values.
typedef uint16_t Word;      ///< Word is 16 bits because PC is 16 bits.

/**
 * @brief Processor Status:
 * As instructions are executed a set of processor flags are set or clear to record the results of the operation.
 * This flags and some additional control flags are held in a special status register.
 * Each flag has a single bit within the register.
 */
struct processor_status {
    Byte C:1;               ///< The carry flag is set if the last operation caused an overflow from bit 7 of the result or an underflow from bit 0.
    Byte Z:1;               ///< The zero flag is set if the result of the last operation as was zero.
    Byte I:1;               ///< The interrupt disable flag is set if the program has executed a 'Set Interrupt Disable' (SEI) instruction.
    Byte D:1;               ///< While the decimal mode flag is set the processor will obey the rules of Binary Coded Decimal (BCD) arithmetic during addition and subtraction.
    Byte BC:1;              ///< The break command bit is set when a BRK instruction has been executed and an interrupt has been generated to process it.
    Byte O:1;               ///< The overflow flag is set during arithmetic operations if the result has yielded an invalid 2's complement result.
    Byte N:1;               ///< The negative flag is set if the result of the last operation had bit 7 set to a one.
};

/**
 * Type describing processor status.
 */
typedef struct processor_status processor_status_t;

/**
 * @brief Resets the CPU.
 * @note See https://www.c64-wiki.com/wiki/Reset_(Process)
 *
 */
void CPU_reset(void);

/**
 * @brief Used to get Stack Pointer.
 * @return Address value of Stack Pointer.
 */
Byte* CPU_get_SP(void);

/**
 * @brief Used to get register based on name passed as argument.
 * @param name Name of register to get.
 * @return Pointer to register.
 */
Byte* CPU_get_register(char name);

/**
 * @brief Get pointer to Processor Status.
 * @return Pointer to Processor Status struct.
 */
processor_status_t* CPU_get_PS(void);

void CPU_execute(uint32_t cycles);

#endif //EMULATOR6502_CPU_H
