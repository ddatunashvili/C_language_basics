
#include <stdio.h>

int main() {
    
    // allocate for arr with 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        // Handle memory allocation failure
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i<5; i++){
        arr[i] = i+1;
    }

    // free allocated memory deallocate 
    free(arr);
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr != NULL){
        for (int i = 0; i < 5; i++){
            arr[i] = i++ ;
        }
        // clean memory
        free(arr);
        arr = NULL;// set to NULL to avoid pointer (clean up pointer adress too)
    }

    return 0;
}