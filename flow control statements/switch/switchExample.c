#include <stdio.h>

int main() {
    
    // 1. Simple switch case
    printf("=== Simple Switch Case ===\n");
    int num = 2;
    switch (num) {
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");  // This will be executed as num = 2
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("Default case\n");
            break;
    }
    printf("\n");

    // 2. Switch without break (fall-through behavior)
    printf("=== Switch without Break (Fall-through) ===\n");
    int num2 = 3;
    switch (num2) {
        case 1:
            printf("Case 1\n");
        case 2:
            printf("Case 2\n");  // Fall-through to case 2
        case 3:
            printf("Case 3\n");  // Fall-through to case 3
            break;
        default:
            printf("Default case\n");
            break;
    }
    printf("\n");

    // 3. Switch with multiple cases sharing same block
    printf("=== Switch with Multiple Cases Sharing Same Block ===\n");
    int num3 = 4;
    switch (num3) {
        case 1:
        case 2:
        case 3:
            printf("Number is between 1 and 3\n");
            break;
        case 4:
            printf("Number is 4\n");  // This will be executed
            break;
        default:
            printf("Default case\n");
            break;
    }
    printf("\n");

    // 4. Switch with no matching case (default used)
    printf("=== Switch with No Matching Case (Default) ===\n");
    int num4 = 7;
    switch (num4) {
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        default:
            printf("No matching case. Default case executed.\n");  // Default executed
            break;
    }
    printf("\n");

    // 5. Switch with character case labels
    printf("=== Switch with Character Case Labels ===\n");
    char ch = 'B';
    switch (ch) {
        case 'A':
            printf("Letter A\n");
            break;
        case 'B':
            printf("Letter B\n");  // This will be executed as ch = 'B'
            break;
        case 'C':
            printf("Letter C\n");
            break;
        default:
            printf("Other letter\n");
            break;
    }
    printf("\n");

    // 6. Switch with no case match (falls to default)
    printf("=== Switch with No Case Match (Falls to Default) ===\n");
    int num5 = 100;
    switch (num5) {
        case 10:
            printf("Case 10\n");
            break;
        case 20:
            printf("Case 20\n");
            break;
        default:
            printf("No matching case. Default case executed.\n");  // Default executed
            break;
    }
    printf("\n");

    // 7. Switch with case expressions (constant expressions)
    printf("=== Switch with Case Expressions (Constant) ===\n");
    int num6 = 50;
    switch (num6) {
        case 10 + 5:  // Case expression evaluates to 15
            printf("Matched case 15\n");
            break;
        case 50:
            printf("Matched case 50\n");  // This will be executed
            break;
        case 100:
            printf("Matched case 100\n");
            break;
        default:
            printf("Default case\n");
            break;
    }
    printf("\n");

    // 8. Switch with case variable expressions (not allowed in C)
    // Note: This will give a compile error as C does not support variable expressions in switch cases
    /*
    printf("=== Switch with Variable Expressions (not allowed in C) ===\n");
    int x = 10;
    switch (x) {
        case x + 5:  // Invalid in C, variable expressions not allowed in case labels
            printf("This will not compile\n");
            break;
        default:
            printf("Default case\n");
            break;
    }
    printf("\n");
    */

    // 9. Switch with empty case label (in some situations, an empty case label can be used)
    printf("=== Switch with Empty Case Label (Possible Error) ===\n");
    int num7 = 5;
    switch (num7) {
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        case 3: ;  // Empty case label with a semicolon, often used to indicate no operation
            break;
        case 4:
            printf("Case 4\n");
            break;
        default:
            printf("Default case\n");
            break;
    }
    printf("\n");

    return 0;
}
