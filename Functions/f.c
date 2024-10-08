#include <stdio.h>

// Function declaration (prototype)
void add(int a, int b);            // Function for addition (by value)
void add_float(float a, float b); // Function for addition of floats (simulating overloading)
void add_by_reference(int *a, int *b); // Function for addition (by reference)

// Function definition
void add(int a, int b) {
    printf("Sum of integers: %d\n", a + b);
}

// Function definition for floats
void add_float(float a, float b) {
    printf("Sum of floats: %.2f\n", a + b);
}

// Function definition (by reference)
void add_by_reference(int *a, int *b) {
    printf("Sum of integers (by reference): %d\n", *a + *b);
}

int main() {
    // Calling functions
    add(5, 10); // Calling function by value
    add_float(5.5, 10.5); // Calling function for floats

    // Variables for by-reference example
    int x = 15, y = 20;
    add_by_reference(&x, &y); // Calling function by reference

    return 0; // End of the program
}
