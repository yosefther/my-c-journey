#include <stdio.h>

// 1. Basic Function
void greet() {
    printf("Hello, World!\n");
}

// 2. Function with Parameters and Return Value
int add(int a, int b) {
    return a + b;
}

// 3. Function with No Return Value (void)
void printMessage(char message[]) {
    printf("%s\n", message);
}

// 4. Function with an Array Parameter
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 5. Function Returning a String (Character Array)
char* getGreeting() {
    return "Hello, C!";
}

// 6. Function with `const` Parameters
void printConstString(const char *str) {
    printf("%s\n", str);
}

int main() {
    // Call Basic Function
    greet();

    // Call Function with Parameters and Return Value
    int sum = add(5, 3);
    printf("Sum: %d\n", sum);

    // Call Function with No Return Value
    printMessage("C is awesome!");

    // Call Function with an Array Parameter
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);

    // Call Function Returning a String
    printf("%s\n", getGreeting());

    // Call Function with `const` Parameters
    printConstString("Immutable String!");

    return 0;
}
