#include <stdio.h>

// Modify an Integer
void modify(int *x) {
    *x = 42;  // Modify the value of the original variable
}

// Swap Two Numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 

                          Modify an Array
						  
 noite array always passed by referance
 Explanation int arr[] in the function automaticlly decays to a pointer (int *ptr)
 
 ##Alternative Syntax: Using Pointers Explicitly##
 
 1- void modifyArray(int *arr, int size) {
 2- for (int i = 0; i < size; i++) {
 3- *(arr + i) *= 2;  // Same as arr[i] *= 2 }}
 
*/
 

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // Double each element
    }
}

// Get Min and Max from an Array
void getMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    // Modify a Variable
    int num = 10;
    printf("Before modify(): %d\n", num);
    modify(&num);
    printf("After modify(): %d\n\n", num);

    // Swap Two Variables
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n\n", x, y);

    // Modify an Array
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    modifyArray(numbers, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    // Get Min and Max from an Array
    int min, max;
    getMinMax(numbers, size, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}
