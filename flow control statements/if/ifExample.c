/*
 * Comprehensive demonstration program covering all cases of if statements in C
 * Includes:
 * - Basic if statement
 * - if-else
 * - if-else if-else
 * - Nested if
 * - Logical operators && and ||
 * - if without {}
 * - if with numeric values
 * - if with boolean values
 */

 #include <stdio.h>
 #include <stdbool.h> // For bool variables
 
 int main() {
     int x = 10, y = 20;
     bool flag = true;
     
     // 1. Basic if statement
     if (x > 5) {
         printf("1. x is greater than 5\n");
     }
     
     // 2. if-else statement
     if (x > 15) {
         printf("2. x is greater than 15\n");
     } else {
         printf("2. x is not greater than 15\n");
     }
     
     // 3. if-else if-else statement
     if (x > 15) {
         printf("3. x is greater than 15\n");
     } else if (x == 10) {
         printf("3. x is equal to 10\n");
     } else {
         printf("3. x is neither 10 nor greater than 15\n");
     }
     
     // 4. Nested if statement
     if (x > 5) {
         if (y > 15) {
             printf("4. x is greater than 5 and y is greater than 15\n");
         }
     }
     
     // 5. Using logical operators && and ||
     if (x > 5 && y < 25) {
         printf("5. x is greater than 5 and y is less than 25\n");
     }
     
     if (x < 5 || y > 15) {
         printf("5. x is less than 5 or y is greater than 15\n");
     }
     
     // 6. if without {}
     if (x > 5)
         printf("6. x is greater than 5 (without braces)\n");
     
     // 7. if with numeric values
     if (x) { // As long as x is not 0, it is true
         printf("7. x is not zero\n");
     }
     
     // 8. if with boolean values
     if (flag) {
         printf("8. flag is enabled\n");
     }
     
     return 0;
 }
 