#include <stdio.h>
#include "file1.h"
#include "file2.h"

int main() {
    printf("=== Static Variable Inside Function ===\n");
    for (int i = 0; i < 3; i++) {
        staticVariableExample();
    }

    printf("\n=== Static Global Variable (File Scope) ===\n");
    modifyStaticGlobal();
    modifyStaticGlobal();

    printf("\n=== Calling Static Function Indirectly ===\n");
    callStaticFunction();

    return 0;
}
