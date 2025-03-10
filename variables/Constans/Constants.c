#include <stdio.h>

// 1. Using #define (Macro Constant)
#define PI 3.14159
#define MAX_USERS 100

// 2. Using static const (File Scope Constant)
static const float GRAVITY = 9.8;  // File-scoped constant (accessible only in this file)

// Function to demonstrate constants
void showConstants() {
    // 3. Using const keyword (Local Constant)
    const char GRADE = 'A';
    const char MESSAGE[] = "Welcome to C Programming!";

    printf("PI (Macro Constant): %f\n", PI);
    printf("Max Users (Macro Constant): %d\n", MAX_USERS);
    printf("Gravity (Static Const): %.2f m/s^2\n", GRAVITY);
    printf("Grade (Const Variable): %c\n", GRADE);
    printf("Message (Const String): %s\n", MESSAGE);
}

int main() {
    showConstants();  // Call the function to display constants
    return 0;
}
