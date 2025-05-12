#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0; // Or some other error indication
    }
}

int modulus(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Division by zero!\n");
        return -1; // Error code for division by zero
    }
}

// Main function
int main() {
    int choice;
    double num1, num2, result;

    // Display the menu
    printf("Pick an operation:\n");
    printf("1. Subtraction (-)\n");
    printf("2. Addition (+)\n");
    printf("3. Integer Division (//)\n");
    printf("4. Multiplication (*)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Get numbers from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the chosen operation
    switch (choice) {
        case 1:  // Subtraction
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 2:  // Addition
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 3:  // Integer Division
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 / (int)num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case 4:  // Multiplication
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 5:  // Modulus
            if ((int)num2 != 0) {
                printf("Result: %d\n", modulus((int)num1, (int)num2));
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 5.\n");
    }

    return 0;
}
