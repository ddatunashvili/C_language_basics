#include <stdio.h>
#include <string.h> // For using the strcpy function

// Define a structure to hold person's information
struct Person {
    char name[50]; // Array to store the name
    int age;      // Integer to store the age
};

// Function to display person's information
// It takes a pointer to a Person structure as an argument
void displayPerson(struct Person *p) {
    printf("Name: %s\n", p->name); // Accessing the name using pointer
    printf("Age: %d\n", p->age);    // Accessing the age using pointer
}

// Function that prints a greeting message
void greet() {
    printf("Hello, World!\n");
}

int main() {
    // Example of using pointers with variables
    int a = 10;                 // Declare an integer variable
    int *ptrA = &a;            // Declare a pointer that holds the address of a

    // Display the value and address of the variable
    printf("Value of a: %d\n", a);                     // Output: 10
    printf("Address of a: %p\n", (void*)&a);           // Print address of a
    printf("Value pointed by ptrA: %d\n", *ptrA);      // Dereference pointer to get value of a

    // Example of pointer arithmetic with arrays
    int arr[] = {10, 20, 30, 40, 50}; // An array of integers
    int *ptrArr = arr;                 // Pointer to the first element of the array

    // Using pointer arithmetic to access array elements
    printf("\nUsing pointer arithmetic to access array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptrArr + i)); // Accessing array elements using pointer
    }

    // Example of using function pointers
    void (*funcPtr)() = greet; // Declare a function pointer that points to the greet function
    printf("\nCalling function using pointer:\n");
    funcPtr(); // Call the function using the function pointer

    // Example of using pointers with structures
    struct Person person; // Declare a Person structure variable
    strcpy(person.name, "Alice"); // Copy name into the structure
    person.age = 30; // Set the age of the person

    // Display person information using a pointer
    printf("\nDisplaying person information using pointers:\n");
    displayPerson(&person); // Pass the address of the person structure

    return 0; // End of the program
}
