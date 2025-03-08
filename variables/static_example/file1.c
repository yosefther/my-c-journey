#include <stdio.h>
#include "file1.h"

// Static global variable (only accessible in file1.c)
static int staticGlobalVar = 100;

// Static function (not accessible outside file1.c)
static void staticFunction() {
    printf("Inside staticFunction() in file1.c\n");
}

// Public function to access the static variable
void modifyStaticGlobal() {
    staticGlobalVar += 10;
    printf("Modified staticGlobalVar: %d\n", staticGlobalVar);
}

// Public function that calls static function
void callStaticFunction() {
    staticFunction();  // Can only be called inside file1.c
}
