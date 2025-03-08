# `static` Keyword in C - Documentation

## Introduction
The `static` keyword in C is used to control the **lifetime** and **visibility** of variables and functions. It modifies how variables persist across function calls and restricts access to functions and variables within a specific file.

## Syntax
```c
static data_type variable_name;
static return_type function_name(arguments);
```

## Use Cases of `static`
1. **Static Local Variables** (Retains value across function calls)
2. **Static Global Variables** (Restricted to the file scope)
3. **Static Functions** (Limited to the file where they are defined)

---

## Example 1: Static Local Variable
A static variable inside a function **retains its value** between function calls.

```c
#include <stdio.h>

void counterExample() {
    static int count = 0; // Retains value across calls
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counterExample(); // Output: Count: 1
    counterExample(); // Output: Count: 2
    counterExample(); // Output: Count: 3
    return 0;
}
```

### 🔹 Key Takeaway
- Unlike a normal variable, `static` variables **do not reset** when a function ends.

---

## Example 2: Static Global Variable
A static global variable is **only accessible within the file** where it is defined.

### File: `file1.c`
```c
#include <stdio.h>

static int hiddenVar = 42; // Only accessible in this file

void printHiddenVar() {
    printf("Hidden Var: %d\n", hiddenVar);
}
```

### File: `file2.c`
```c
#include <stdio.h>

extern int hiddenVar; // ❌ ERROR: static variable cannot be accessed

int main() {
    printf("Hidden Var: %d\n", hiddenVar);
    return 0;
}
```

### 🔹 Key Takeaway
- `static` global variables **prevent external access**, improving encapsulation.

---

## Example 3: Static Function
A `static` function is **only accessible within the file** where it is defined.

### File: `file1.c`
```c
#include <stdio.h>

static void hiddenFunction() {
    printf("This is a static function\n");
}

void callHiddenFunction() {
    hiddenFunction(); // ✅ Allowed inside file1.c
}
```

### File: `file2.c`
```c
#include <stdio.h>

extern void hiddenFunction(); // ❌ ERROR: Cannot access static function

int main() {
    hiddenFunction();
    return 0;
}
```

### 🔹 Key Takeaway
- `static` functions prevent unintended access from other files, making them **private** to their translation unit.

---

## Key Differences: `static` vs `extern`
| Feature         | `static`                   | `extern`                  |
|---------------|------------------------|------------------------|
| Scope        | File or function scope  | Global (across files)  |
| Lifetime     | Entire program duration | Entire program duration |
| Accessibility | Restricted (file-level or function-level) | Accessible from other files |
| Usage        | Data hiding & persistence | Global sharing |

---

## Conclusion
The `static` keyword enhances **modularity**, **data hiding**, and **function persistence** in C programs. It is essential for **controlling access to variables/functions** and ensuring efficient memory management.

---

## 🔗 Recommended Resources
- [C Documentation - static Keyword](https://en.cppreference.com/w/c/language/storage_duration)
- [Understanding Storage Classes in C](https://www.geeksforgeeks.org/storage-classes-in-c/)



