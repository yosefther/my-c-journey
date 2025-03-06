<<<<<<< HEAD
#include <stdio.h>

// Global variable (accessible via extern)
int globalVar = 10;

// Const variable (requires extern in other files)
const int maxUsers = 100;

// Function defined in this file
void sayHello() {
    printf("Hello from file1.c!\n");
}

// Static variable (not accessible via extern)
static int staticVar = 50;

// Function to print static variable (only accessible in file1.c)
void printStaticVar() {
    printf("StaticVar (file1.c): %d\n", staticVar);
}
  
=======
#include <stdio.h>

// Global variable (accessible via extern)
int globalVar = 10;

// Const variable (requires extern in other files)
const int maxUsers = 100;

// Function defined in this file
void sayHello() {
    printf("Hello from file1.c!\n");
}

// Static variable (not accessible via extern)
static int staticVar = 50;

// Function to print static variable (only accessible in file1.c)
void printStaticVar() {
    printf("StaticVar (file1.c): %d\n", staticVar);
}
>>>>>>> 4cb360fd912f38bdd0e9b044ad4761792a3a7c6a
