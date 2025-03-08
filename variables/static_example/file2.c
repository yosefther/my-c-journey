#include <stdio.h>
#include "file2.h"

// Function with a static variable (retains value across calls)
void staticVariableExample() {
    static int count = 0; // Retains value between function calls
    count++;
    printf("Static count: %d\n", count);
}
