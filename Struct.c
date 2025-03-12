/*
 * This program demonstrates the use of structures in C.
 * It defines a "Person" structure with attributes for name, age, and height.
 * Functions are provided to initialize and display a Person's details.
 */

 #include <stdio.h>
 #include <string.h>
 
 // Define a struct to represent a person
 typedef struct {
     char name[50];  // Stores the person's name
     int age;        // Stores the person's age
     float height;   // Stores the person's height in meters
 } Person;
 
 // Function to initialize a Person structure
 void init_person(Person *p, const char *name, int age, float height) {
     strncpy(p->name, name, sizeof(p->name) - 1);
     p->name[sizeof(p->name) - 1] = '\0'; // Ensure null termination
     p->age = age;
     p->height = height;
 }
 
 // Function to display a Person's information
 void display_person(const Person *p) {
     printf("Name: %s\n", p->name);
     printf("Age: %d\n", p->age);
     printf("Height: %.2f meters\n", p->height);
 }
 
 int main() {
     // Declare and initialize a Person instance
     Person person1;
     init_person(&person1, "Alice", 25, 1.68);
     
     // Display the person's details
     printf("Person Details:\n");
     display_person(&person1);
     
     return 0;
 }
 