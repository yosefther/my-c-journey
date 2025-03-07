# `extern` Keyword in C - Documentation

## Introduction
The `extern` keyword in C is used to declare a variable or function that is defined in another file or scope. It enables multiple files to share global variables and functions without redefining them.

## Syntax
```c
extern data_type variable_name;
extern return_type function_name(arguments);
```

## Use Cases of `extern`
1. **Accessing Global Variables from Another File**
2. **Declaring Functions Defined in Other Files**
3. **Using `extern` with `const` Variables**
4. **Understanding `extern` with Static Variables**

## Example 1: Using `extern` with Global Variables
### File: `file1.c`
```c
#include <stdio.h>

// Define a global variable
int globalVar = 10;
```

### File: `file2.c`
```c
#include <stdio.h>

// Declare the global variable using extern
extern int globalVar;

int main() {
    printf("Global Variable: %d\n", globalVar);
    return 0;
}
```

### Compilation
```sh
gcc file1.c file2.c -o program
./program
```

## Example 2: Using `extern` with Functions
### File: `math_functions.c`
```c
#include <stdio.h>

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### File: `main.c`
```c
#include <stdio.h>

// Function declaration
extern int add(int, int);

int main() {
    int result = add(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}
```

### Compilation
```sh
gcc main.c math_functions.c -o program
./program
```

## Example 3: `extern` with `const` Variables
### File: `constants.c`
```c
#include <stdio.h>

// Define a const variable
const int MAX_USERS = 100;
```

### File: `main.c`
```c
#include <stdio.h>

// Declare the const variable
extern const int MAX_USERS;

int main() {
    printf("Max Users: %d\n", MAX_USERS);
    return 0;
}
```

## Example 4: `extern` and `static`
- `extern` **cannot be used with `static` variables** because `static` limits scope to the current file.
- Trying to access a `static` variable in another file using `extern` will cause a **linker error**.

### Incorrect Example:
#### File: `file1.c`
```c
static int hiddenVar = 50;  // Only accessible in file1.c
```
#### File: `file2.c`
```c
extern int hiddenVar; // ❌ ERROR: static variable cannot be accessed
```

## Key Takeaways
- `extern` **declares** variables or functions without defining them.
- It is used to share **global variables** and **functions** across multiple files.
- `extern` **cannot be used with `static` variables**.
- It is commonly used in **header files** to provide function declarations.

## Conclusion
The `extern` keyword is essential for modular programming in C, allowing **multiple files to share variables and functions** without redundancy. However, it should be used carefully to avoid namespace conflicts and maintain code clarity.

