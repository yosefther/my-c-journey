#include <stdio.h>

// 1. Using #define (Macro Constant)
#define PI 3.14159
#define MAX_USERS 100

// 2. Using static const (File Scope Constant)
static const float GRAVITY = 9.8;  // File-scoped constant (accessible only in this file)

// 3. Function-like Macros
#define SQUARE(x) ((x) * (x))                      // Macro to calculate square of a number
#define CIRCUMFERENCE(radius) (2 * PI * (radius))  // Macro to calculate circumference of a circle
#define MAX(a, b) ((a) > (b) ? (a) : (b))          // Macro to find the maximum of two numbers

// Function to demonstrate constants and macros
void showConstants() {
    // Using const keyword (Local Constant)
    const char GRADE = 'A';
    const char MESSAGE[] = "Welcome to C Programming!";

    printf("PI (Macro Constant): %f\n", PI);
    printf("Max Users (Macro Constant): %d\n", MAX_USERS);
    printf("Gravity (Static Const): %.2f m/s^2\n", GRAVITY);
    printf("Grade (Const Variable): %c\n", GRADE);
    printf("Message (Const String): %s\n", MESSAGE);

    // Using Function-like Macros
    int num = 5;
    float radius = 3.0;
    int a = 10, b = 20;

    printf("\nUsing Function-like Macros:\n");
    printf("Square of %d: %d\n", num, SQUARE(num));
    printf("Circumference of circle with radius %.2f: %.2f\n", radius, CIRCUMFERENCE(radius));
    printf("Maximum of %d and %d: %d\n", a, b, MAX(a, b));
}

int main() {
    showConstants();  // Call the function to display constants
    return 0;
}
