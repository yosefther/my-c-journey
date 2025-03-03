#include <stdio.h>

/*
Explanation:
1. This program demonstrates the use of the 'auto' keyword in C, although it is unnecessary.
2. In C, local variables (declared inside a function) automatically have an "automatic storage duration."
   - This means they are created when the function is called and destroyed when it exits.
   - The 'auto' keyword explicitly declares such variables, but since it's the default, writing 'auto' is optional.
3. The function 'demonstrateAuto()' defines two local variables using 'auto' and prints their values.
4. The 'main()' function calls 'demonstrateAuto()' to execute this demonstration.
5. The program prints the values of the variables, showing that they behave normally with or without 'auto'.
*/

void demonstrateAuto() {
    auto int x = 10;  // Using 'auto' (but it's redundant)
    auto int y = 20;  // 'auto' is not needed
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    printf("Demonstrating 'auto' in C:\n");
    demonstrateAuto();
    return 0;
}
