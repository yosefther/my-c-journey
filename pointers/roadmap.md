#  Mastering Pointers in C – Roadmap

A complete roadmap to help you understand and practice pointers in the C programming language, from beginner to advanced.

---

##  Stage 1: Basics of Pointers

| Topic                 | Goal                                       | Practice Example                                  |
|----------------------|--------------------------------------------|---------------------------------------------------|
| `&` Address-of       | Get the address of a variable              | Print addresses of `int`, `float`, `char`         |
| `*` Dereference      | Access the value stored at an address      | Create pointer to int, assign value, dereference  |
| Declaring Pointers   | Learn pointer types (`int*`, `char*`, etc.)| Declare and print pointer variables               |
| Null Pointers        | Understand NULL and safety checks          | Set a pointer to `NULL` and check it before use   |

 File: `pointer_basics.c`

---

##  Stage 2: Pointer Arithmetic

| Topic                   | Goal                                              | Practice Example                                  |
|------------------------|---------------------------------------------------|---------------------------------------------------|
| Increment / Decrement  | Move pointer across array                         | Use pointer to iterate over an array              |
| Pointer difference     | Measure distance between pointers                 | Subtract two pointers                            |
| Type size awareness     | Understand how pointer math uses sizeof(type)     | Test pointer math with different data types       |

 File: `pointer_arithmetic.c`

---

##  Stage 3: Pointers and Arrays

| Topic               | Goal                                             | Practice Example                                  |
|--------------------|--------------------------------------------------|---------------------------------------------------|
| Arrays as Pointers | Understand how arrays decay to pointers          | Access array elements with pointer notation       |
| Pointer to Array    | Use `int (*p)[5]` or similar types               | Pass array to function and access with pointer    |
| Dynamic Arrays     | Use `malloc` and `free`                          | Create array using `malloc`, fill it, free it     |

 File: `pointer_arrays.c`

---

##  Stage 4: Pointers with Functions

| Topic                  | Goal                                                | Practice Example                                |
|-----------------------|-----------------------------------------------------|-------------------------------------------------|
| Pass by Address        | Modify original variable via pointer               | Create `swap(int *a, int *b)` function          |
| Return Pointer         | Return allocated memory from function              | Write `int* createArray()` with `malloc`        |
| Function Pointers      | Store and call functions using pointers            | Simple calculator using function pointers       |

 File: `pointer_functions.c`

---

##  Stage 5: Advanced Usage

| Topic                 | Goal                                            | Practice Example                                   |
|----------------------|-------------------------------------------------|----------------------------------------------------|
| Double Pointers       | Handle pointer to pointer (`int **`)           | Modify pointer value in a function                 |
| Pointer to Struct     | Use `->` to access struct members               | Create and print `struct Person` using pointer     |
| Dynamic 2D Arrays     | Allocate 2D memory at runtime                   | Create dynamic matrix using `int **matrix`         |
| Void Pointers         | Use `void *` for generic functions              | Cast `void *` and access content safely            |

 File: `pointer_advanced.c`

---

## Final Projects / Challenges

- [ ] Build a dynamic matrix and implement matrix operations (add, multiply)
- [ ] Create a singly linked list (`Node*` with `next`)
- [ ] Simulate `malloc`/`free` with an array and pointer logic
- [ ] Write your own string functions using pointers: `strlen`, `strcpy`, etc.

---

## Resources

-  *C Programming Language* by Kernighan & Ritchie – Chapter 5
-  [learn-c.org: Pointers](https://www.learn-c.org/en/Pointers)
-  [GeeksForGeeks: Pointers in C](https://www.geeksforgeeks.org/pointers-in-c/)
