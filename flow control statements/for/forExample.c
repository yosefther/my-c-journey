#include <stdio.h>

int main() {
    
    // 1. Traditional for loop (most commonly used)
    printf("=== Traditional for Loop ===\n");
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);  // Prints values from 0 to 4
    }
    printf("\n");

    // 2. for loop without condition (infinite loop)
    printf("=== for Loop without Condition (Infinite Loop) ===\n");
    for (int i = 0;; i++) {
        if (i == 5) break;  // Breaks the loop after 5 iterations
        printf("i = %d\n", i);
    }
    printf("\n");

    // 3. for loop without initialization
    printf("=== for Loop without Initialization ===\n");
    int i = 0;
    for (; i < 5; i++) {
        printf("i = %d\n", i);  // Prints values from 0 to 4
    }
    printf("\n");

    // 4. for loop without increment
    printf("=== for Loop without Increment ===\n");
    for (int i = 0; i < 5;) {
        printf("i = %d\n", i);  // Prints values from 0 to 4
        i++;  // Increment the variable inside the loop body
    }
    printf("\n");

    // 5. for loop with no components (Infinite loop)
    printf("=== for Loop with No Components ===\n");
    for (;;) {
        printf("Infinite loop\n");
        break;  // Breaks the loop after the first iteration
    }
    printf("\n");

    // 6. for loop with compound conditions
    printf("=== for Loop with Compound Conditions ===\n");
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);  // Prints values from 0 to 4 and 10 to 6
    }
    printf("\n");

    // 7. for loop with multiple variables
    printf("=== for Loop with Multiple Variables ===\n");
    for (int i = 0, j = 10; i < 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);  // Prints values from 0 to 4 and 10 to 6
    }
    printf("\n");

    // 8. for loop with continue
    printf("=== for Loop with continue ===\n");
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            continue;  // Skips the iteration when i = 2
        }
        printf("i = %d\n", i);  // Prints values except 2
    }
    printf("\n");

    // 9. for loop with break
    printf("=== for Loop with break ===\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;  // Breaks the loop when i = 5
        }
        printf("i = %d\n", i);  // Prints values from 0 to 4
    }
    printf("\n");

    // 10. Nested for loops
    printf("=== Nested for Loops ===\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);  // Prints coordinates in a 3x3 grid
        }
        printf("\n");
    }
    printf("\n");

    // 11. for loop with decrement
    printf("=== for Loop with Decrement ===\n");
    for (int i = 5; i > 0; i--) {
        printf("i = %d\n", i);  // Prints values from 5 to 1
    }
    printf("\n");

    // 12. for loop with custom step control
    printf("=== for Loop with Custom Step Control ===\n");
    for (int i = 0; i < 10; i += 2) {
        printf("i = %d\n", i);  // Prints values from 0 to 8, incremented by 2 each time
    }
    printf("\n");

    // 13. for loop on array (Array iteration)
    printf("=== for Loop on Array ===\n");
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    for (int i = 0; i < size; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);  // Prints array elements
    }
    printf("\n");

    return 0;
}
