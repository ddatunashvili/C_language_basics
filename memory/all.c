#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, new_size;

    // Allocate memory using malloc
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int *array = (int *)malloc(size * sizeof(int));

    // Check for malloc failure
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // Initialize array elements
    for (int i = 0; i < size; i++) {
        array[i] = i + 1; // Assign values 1, 2, ..., size
    }
    
    printf("Array after malloc:\n");
    print_array(array, size);

    // Reallocate memory using realloc
    printf("Enter new size for the array: ");
    scanf("%d", &new_size);
    array = (int *)realloc(array, new_size * sizeof(int));

    // Check for realloc failure
    if (array == NULL) {
        fprintf(stderr, "Memory reallocation failed!\n");
        return 1;
    }

    // Initialize new elements if new size is larger
    for (int i = size; i < new_size; i++) {
        array[i] = 0; // Initialize new elements to 0
    }

    printf("Array after realloc:\n");
    print_array(array, new_size);

    // Free allocated memory
    free(array);
    array = NULL; // Avoid dangling pointer

    return 0;
}
