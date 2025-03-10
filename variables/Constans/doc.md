# Constants in C

This document explains different ways to define constants in the C programming language. The code showcases:

- **Macro Constants** using `#define`
- **File Scope Constants** using `static const`
- **Local Constants** using `const`
- **Function-like Macros** for inline computations

## 🚀 Features

- Uses `#define` macros for preprocessor-based constants.
- Demonstrates `static const` for file-scoped constants.
- Utilizes `const` keyword for function-local constants.
- Implements **Function-like Macros** to optimize performance.

## 📜 Code Overview

```c
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
    printf("Gravity (Static Const): %.2f m/s²\n", GRAVITY);
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
```

## 📜 Explanation of Constants & Macros

| Type                     | Syntax Example                        | Description |
|--------------------------|-------------------------------------|-------------|
| **Macro Constant**       | `#define PI 3.14159`               | Replaced at compile time, no memory usage. |
| **File Scope Constant**  | `static const float g = 9.8;`      | Constant accessible only within the file. |
| **Local Constant**       | `const int x = 10;`                | Read-only variable with block scope. |
| **Function-like Macro**  | `#define SQUARE(x) ((x) * (x))`    | Macro that works like a function but is replaced at compile time. |

## 📌 Function-like Macros Explained

| Macro                   | Definition                                    | Example Usage | Output |
|-------------------------|-----------------------------------------------|--------------|--------|
| `SQUARE(x)`            | `(x) * (x)`                                  | `SQUARE(5)`  | `25`   |
| `CIRCUMFERENCE(r)`     | `2 * PI * (r)`                               | `CIRCUMFERENCE(3)` | `18.85` |
| `MAX(a, b)`           | `(a > b) ? a : b`                             | `MAX(10, 20)` | `20`   |

## 📌 How to Compile & Run

To compile and run the program, use the following commands in a terminal:

```sh
gcc constants.c -o constants
./constants
```

## 📌 Expected Output

```sh
PI (Macro Constant): 3.141590
Max Users (Macro Constant): 100
Gravity (Static Const): 9.80 m/s²
Grade (Const Variable): A
Message (Const String): Welcome to C Programming!

Using Function-like Macros:
Square of 5: 25
Circumference of circle with radius 3.00: 18.85
Maximum of 10 and 20: 20
```

