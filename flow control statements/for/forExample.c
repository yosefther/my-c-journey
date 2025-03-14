#include <stdio.h>
#include <stdlib.h>

void basicWhileLoop();
void infiniteLoop();
void whileWithBreak();
void whileWithContinue();
void nestedWhileLoop();
void neverExecutes();
void userInputLoop();
void stateMachineLoop();

int main() {
    int choice;
    
    while (1) {
        // Display menu
        printf("\nChoose a While Loop Case:\n");
        printf("1. Basic While Loop\n");
        printf("2. Infinite Loop (Use Ctrl+C to stop)\n");
        printf("3. While Loop with Break\n");
        printf("4. While Loop with Continue\n");
        printf("5. Nested While Loop\n");
        printf("6. While Loop That Never Executes\n");
        printf("7. While Loop with User Input\n");
        printf("8. While Loop as a State Machine\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: basicWhileLoop(); break;
            case 2: infiniteLoop(); break;
            case 3: whileWithBreak(); break;
            case 4: whileWithContinue(); break;
            case 5: nestedWhileLoop(); break;
            case 6: neverExecutes(); break;
            case 7: userInputLoop(); break;
            case 8: stateMachineLoop(); break;
            case 9: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

// 1. Basic While Loop
void basicWhileLoop() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
}

// 2. Infinite While Loop
void infiniteLoop() {
    while (1) {
        printf("Infinite loop... Press Ctrl+C to stop\n");
    }
}

// 3. While Loop with Break
void whileWithBreak() {
    int i = 0;
    while (1) {
        if (i >= 5) break;
        printf("%d\n", i);
        i++;
    }
}

// 4. While Loop with Continue
void whileWithContinue() {
    int i = 0;
    while (i < 5) {
        i++;
        if (i == 3) continue;
        printf("%d\n", i);
    }
}

// 5. Nested While Loop
void nestedWhileLoop() {
    int i = 1, j;
    while (i <= 3) {
        j = 1;
        while (j <= 3) {
            printf("i=%d, j=%d\n", i, j);
            j++;
        }
        i++;
    }
}

// 6. While Loop That Never Executes
void neverExecutes() {
    int i = 10;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
}

// 7. While Loop with User Input
void userInputLoop() {
    int num;
    while (1) {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        if (num == 0) break;
    }
}

// 8. While Loop as a State Machine
void stateMachineLoop() {
    int state = 1;
    while (state) {
        switch (state) {
            case 1:
                printf("State 1\n");
                state = 2;
                break;
            case 2:
                printf("State 2\n");
                state = 3;
                break;
            case 3:
                printf("State 3\n");
                state = 0;
                break;
        }
    }
}
