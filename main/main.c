#include <stdio.h>
#include "CPU.h"

int main() {
    CPU_reset();
    CPU_execute(2);
    return 0;
}
