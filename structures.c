#include <stdio.h>
#include <string.h>  // Include string.h for strcpy

// Define the structure
struct human {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create an instance of the struct
    struct human gela;  // Declare a variable of type struct human

    // Use strcpy to copy the string into the name member
    strcpy(gela.name, "gela");  // Correct usage with the instance
    gela.age = 25;               // Assign an age
    gela.height = 5.9;           // Assign a height

    // Print the values
    printf("Name: %s\n", gela.name);
    printf("Age: %d\n", gela.age);
    printf("Height: %.1f\n", gela.height);

    return 0;
}
