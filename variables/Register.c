#include <stdio.h>

void optimizedLoop() {
    register int i;  // Compiler may optimize this variable to a CPU register
    int sum = 0;

    for (i = 0; i < 1000000; i++) {
        sum += i;
    }

    printf("Sum using register variable: %d\n", sum);
}

void invalidAddressExample() {
    register int x = 42;
    //int *ptr = &x; // ❌ ERROR: Cannot take address of a register variable

    printf("Register variable x: %d (Cannot use &x)\n", x);
}

void compareRegisterAndAuto() {
    register int regVar = 10;
    auto int autoVar = 20; // auto is default for local variables

    printf("Register Variable: %d\n", regVar);
    printf("Auto Variable: %d\n", autoVar);
}

int main() {
    printf("=== Optimized Loop ===\n");
    optimizedLoop();

    printf("\n=== Invalid Address Example ===\n");
    invalidAddressExample();

    printf("\n=== Comparing Register vs Auto ===\n");
    compareRegisterAndAuto();

    return 0;
}
