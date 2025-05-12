#include <stdio.h>
#include <assert.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int modulus(int a, int b);

// Unit tests
void test_add() {
    assert(add(1, 2) == 3);
    assert(add(-1, -2) == -3);
    assert(add(-1, 1) == 0);
    printf("Addition tests passed.\n");
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(-5, 3) == -8);
    assert(subtract(0, 0) == 0);
    printf("Subtraction tests passed.\n");
}

void test_multiply() {
    assert(multiply(3, 2) == 6);
    assert(multiply(-3, 2) == -6);
    assert(multiply(0, 2) == 0);
    printf("Multiplication tests passed.\n");
}

void test_divide() {
    assert(divide(6, 2) == 3);
    assert(divide(-6, 2) == -3);
    assert(divide(5, 0) == 0); // This should trigger the error message
    printf("Division tests passed.\n");
}

void test_modulus() {
    assert(modulus(5, 2) == 1);
    assert(modulus(10, 3) == 1);
    assert(modulus(5, 0) == -1); // Error case: modulus by 0
    printf("Modulus tests passed.\n");
}

int main() {
    // Run all the tests
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    test_modulus();

    printf("All tests passed.\n");
    return 0;
}
