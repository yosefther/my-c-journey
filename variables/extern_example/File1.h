#ifndef FILE1_H
#define FILE1_H

extern int globalVar;        // Declaration of global variable
extern const int maxUsers;   // Declaration of const variable

extern void sayHello();      // Declaration of function

void printStaticVar(); // Can be called within file1.c

#endif
