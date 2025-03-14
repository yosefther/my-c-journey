#include <stdio.h>

// Function to modify an array
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    // 1. Declaration and Initialization
    int arr[5] = {1, 2, 3, 4, 5};

    // 2. Accessing Elements
    printf("First element: %d\n", arr[0]);

    // 3. Modifying Elements
    arr[2] = 10;

    // 4. Looping Through an Array
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 5. Passing an Array to a Function
    modifyArray(arr, 5);

    // 6. Multidimensional Array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Matrix element [1][2]: %d\n", matrix[1][2]);

    return 0;
}
