#include <stdio.h>
#include <stdlib.h>

int add(int a , int b){
    return a + b;
}

// არაფერს აბრუნებს
void greet(){
    printf("heelo, gela!\n");
}

// pass variable pointer in arg and modify its value
void increment(int *num){
    *num = *num + 1;
}

int main(){
    int x = 10;
    increment(&x);
    printf("%d\n", x);
    int res = add(10, 5);

    printf("The sum is: %d\n", res);
    greet();
    return 0;
}