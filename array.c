#include <stdio.h>


void hello(){
    printf("hello");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[5]= {1,2,3,4}; // 5 element size arr

    printf("%d\n", arr[1]);
    arr[0] = 100;

    /*

    for (int i = 0; i > -10000; i--){
        printf("%d\n", arr[i]);
    }

  
    int mat[2][3] = {
        {1,2,3},
        {2,2,3}
    };

    */

    int *ptr;
    int num = 20;
    ptr = &num;
    printf("%d\n", ptr); // 6422276
    printf("%x\n", ptr); // 61ff04
    printf("%d", (void*)&num);

    int ar[3] = {10, 20, 30};
    int *pt = ar;  // Points to the first element
    
    printf("%d\n", *(pt + 1));  // Accesses the second element (20)
    printf("%d\n", *(pt));  // Accesses the first element (10)
    printf("%d\n", pt[1]);  // Accesses the first element (10)

    void (*hi)() = hello;
    hi();

    int x = 5;
    int y = 10;

    swap(&x, &y);

    printf("\n%d\n%d\n", x,y);

    return 0;
}
