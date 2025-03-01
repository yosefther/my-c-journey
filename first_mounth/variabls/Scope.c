#include <stdio.h>

// Global variable
int global_var = 10;

// File scope variable (only accessible within this file)
static int file_scope_var = 20;

void function(int param_var) {  // Function parameter scope
    // Local variable
    int local_var = 30;

    printf("Inside function:\n");
    printf("  global_var: %d\n", global_var);
    printf("  file_scope_var: %d\n", file_scope_var);
    printf("  param_var: %d\n", param_var);
    printf("  local_var: %d\n", local_var);

    {
        // Block scope variable
        int block_var = 40;
        printf("  Inside block:\n");
        printf("    block_var: %d\n", block_var);
    }

    // block_var is not accessible here
    // printf("block_var: %d\n", block_var); // This would cause a compilation error
}

int main() {
    // Local variable in main
    int main_local_var = 50;

    printf("Inside main:\n");
    printf("  global_var: %d\n", global_var);
    printf("  file_scope_var: %d\n", file_scope_var);
    printf("  main_local_var: %d\n", main_local_var);

    function(60);

    // local_var and param_var are not accessible here
    // printf("local_var: %d\n", local_var); // This would cause a compilation error
    // printf("param_var: %d\n", param_var); // This would cause a compilation error

    return 0;
}