#include <stdio.h>

int main() {
    // First, printf("%s", "hello world!!") prints the string "hello world!!"
    // and returns the number of characters printed (12).
    // This returned value (12) is then passed to printf("%d", ...),
    // which prints it as an integer.
    printf("%d", printf("%s", "hello world!!"));
    
    return 0;
}
