#include <stdio.h>

int main() {
    int n = 42;        // Regular integer variable
    int *pn = &n;      // Pointer to an integer (points to 'n')
    int **ppn = &pn;   // Pointer to a pointer (points to 'pn')
    int ***pppn = &ppn; // Pointer to a pointer to a pointer (points to 'ppn')

    // Print the memory addresses to demonstrate pointer dereferencing
    printf("Address of n using &n:      %p\n", (void*)&n);
    printf("Address of n using &*pn:    %p\n", (void*)&*pn);
    printf("Address of n using &***pppn: %p\n", (void*)&***pppn);

    return 0;
}
