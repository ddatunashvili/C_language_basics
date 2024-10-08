#include <stdio.h>

// Preprocessor directive to define a macro
#define SQUARE(x) ((x) * (x)) // Macro to calculate the square of a number

// Conditional compilation directives
#define DEBUG // Uncomment this line to enable debugging

int main() {
    int number = 5;

    // Using the macro
    printf("The square of %d is %d\n", number, SQUARE(number));

    // Conditional compilation
#ifdef DEBUG // If DEBUG is defined, this block will be included
    printf("Debugging is enabled.\n");
    printf("Current value of number: %d\n", number);
#endif

    // Example of conditional compilation for different platforms
#ifdef _WIN32 // Check if the program is being compiled on Windows
    printf("This is a Windows environment.\n");
#else
    printf("This is not a Windows environment.\n");
#endif

    return 0; // End of the program
}
