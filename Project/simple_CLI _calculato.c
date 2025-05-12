#include <stdio.h>

int main() {
	double num1,num2,result;
	int userChoice;
 	printf("Pick an operation:\n");
    printf("1. Subtraction (-)\n");
    printf("2. Addition (+)\n");
    printf("3. Integer Division (//)\n");
    printf("4. Multiplication (*)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
	scanf("%d",&userChoice);
	printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
	switch (userChoice) {
        case 1:  // Subtraction
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:  // Addition
            result = num1 + num2;
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
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 5:  // Modulus
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 5.\n");
    }
	    return 0;

}
