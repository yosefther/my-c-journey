#include <stdio.h>
#include "file1.h"

// Using extern to access globalVar
extern int globalVar;

int main() {
    printf("Initial globalVar: %d\n", globalVar);

    // Modify the global variable
    globalVar = 20;
    printf("Modified globalVar: %d\n", globalVar);

    // Access the extern function
    sayHello();

    // Access const variable
    printf("Max Users Allowed: %d\n", maxUsers);

    // Cannot access staticVar here (it's private to file1.c)
    // printf("StaticVar: %d\n", staticVar); ❌ ERROR

    return 0;
}
