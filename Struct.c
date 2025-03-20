#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Basic struct definition
struct Person {
    char name[50];
    int age;
    float height;
};

// 2. Using typedef with struct
typedef struct {
    char name[50];
    int salary;
} Employee;

// 3. Struct containing a pointer to itself (Linked List Node)
struct Node {
    int data;
    struct Node* next;
};

// 4. Nested structure
struct Address {
    char city[50];
    char country[50];
};

struct Student {
    char name[50];
    int id;
    struct Address address; // Struct inside another struct
};

// 5. Struct with dynamically allocated memory
struct DynamicArray {
    int size;
    int *array;
};

// Function to print a Person structure
void printPerson(struct Person p) {
    printf("Name: %s, Age: %d, Height: %.2f\n", p.name, p.age, p.height);
}

// Function to modify an Employee structure through a pointer
void modifyEmployee(Employee *e, int newSalary) {
    e->salary = newSalary;
}

int main() {
    // 1. Basic struct initialization
    struct Person person1 = {"Alice", 30, 1.75};
    printPerson(person1);

    // 2. Using typedef
    Employee emp1 = {"John Doe", 5000};
    printf("Employee: %s, Salary: %d\n", emp1.name, emp1.salary);
    modifyEmployee(&emp1, 6000);
    printf("Updated Salary: %d\n", emp1.salary);

    // 3. Struct with pointers (Linked List Node)
    struct Node node1 = {10, NULL};
    struct Node node2 = {20, &node1};
    printf("Node2 Data: %d, Node1 Data: %d\n", node2.data, node2.next->data);

    // 4. Initializing nested structures
    struct Student student1 = {"Bob", 101, {"New York", "USA"}};
    printf("Student: %s, ID: %d, City: %s, Country: %s\n",
           student1.name, student1.id, student1.address.city, student1.address.country);

    // 5. Allocating memory dynamically inside a struct
    struct DynamicArray dynArr;
    dynArr.size = 5;
    dynArr.array = (int*)malloc(dynArr.size * sizeof(int));
    for (int i = 0; i < dynArr.size; i++) {
        dynArr.array[i] = i * 10;
    }
    printf("Dynamic Array: ");
    for (int i = 0; i < dynArr.size; i++) {
        printf("%d ", dynArr.array[i]);
    }
    printf("\n");

    // Free allocated memory
    free(dynArr.array);

    return 0;
}
