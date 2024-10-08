#include <stdio.h>
#include <string.h> // For string functions

// Function to display elements of a one-dimensional array
void displayArray(int arr[], int size) {
    printf("One-Dimensional Array Elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to display elements of a two-dimensional array
void displayMultiDimensionalArray(int arr[][3], int rows) {
    printf("Multi-Dimensional Array Elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to demonstrate string manipulation
void manipulateString() {
    char str1[100] = "Hello"; // First string
    char str2[100] = "World"; // Second string

    // Concatenate str1 and str2
    strcat(str1, " "); // Add a space
    strcat(str1, str2); // Combine str2 into str1

    printf("Concatenated String: %s\n", str1); // Print the result

    // Copy a new string into str2
    strcpy(str2, "Everyone");
    printf("Modified String: %s\n", str2); // Print the modified string
}

int main() {
    // One-Dimensional Array
    int oneDimensionalArray[5] = {10, 20, 30, 40, 50}; // Initialize the array
    displayArray(oneDimensionalArray, 5); // Call function to display array

    // Two-Dimensional Array
    int multiDimensionalArray[2][3] = { {1, 2, 3}, {4, 5, 6} }; // Initialize the array
    displayMultiDimensionalArray(multiDimensionalArray, 2); // Display array

    // String Manipulation
    manipulateString(); // Demonstrate string functions

    return 0; // End of the program
}
