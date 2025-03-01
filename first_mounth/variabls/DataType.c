#include <stdio.h>
#include <limits.h>

int main() {
    // Integer
    unsigned int var = UINT_MAX;  // 4 bytes
    int var2 = INT_MIN;           // 4 bytes
    int var3 = INT_MAX;           // 4 bytes
    printf("Max unsigned: %u \nMin: %d\nMax: %d\n", var, var2, var3);  // %u for unsigned decimal value

    unsigned short int var4 = USHRT_MAX;  // 2 bytes
    short int var5 = SHRT_MAX;            // 2 bytes
    short int var6 = SHRT_MIN;            // 2 bytes
    printf("\nMax unsigned: %u \nMin: %d\nMax: %d\n", var4, var5, var6);

    // Character
    char var7 = 0x7B;  // Hexadecimal format
    char var8 = 123;   // Decimal format
    printf("\nWritten with hex format: %c \nWritten with decimal format: %c\n", var7, var8);

    // Float => 32 bits, Double => 64 bits, Long Double => 96 bits
    // **Note**: The size depends on the system
    float var9 = 3.12123444551245;
    double var10 = 3.12384235831234;
    long double var11 = 3.1243144356224633;

    printf("%zu\n", sizeof(float));        // Use %zu for size_t
    printf("%zu\n", sizeof(double));       // Use %zu for size_t
    printf("%zu\n", sizeof(long double));  // Use %zu for size_t

    printf("%.16f\n", var9);              // Print float with 16 decimal places
    printf("%.16f\n", var10);             // Print double with 16 decimal places
    printf("%.21Lf\n", var11);            // Print long double with 21 decimal places

    return 0;
}