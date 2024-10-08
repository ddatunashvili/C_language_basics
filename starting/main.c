#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{

    int age;
    float height;
    char initial;
    double d;

    age = 20;
    /*
    printf("%d\n",age);// string
    printf("%c\n",height); // char
    printf("%f\n",initial); // float
    printf("%0.10f\n",d); // double
    */
    const int year = 2024;
    const char grade = 'A';
    int x = 5, y = 10;
    int a = 5, b = 3; // 101, 011
    /*
    printf("%d\n", a & b);
    printf("%d\n", a >> 2);
    printf("%d\n", a << 2);
    printf("%d\n", a ^  b);
    */
    age = 10;
    if (age != 10)
    {
        puts("age is not 10");
    }
    else if (age == 10)
    {
        puts("age is not 10");
    }

    /*

    int weight;
    printf("write weight: ");
    scanf("%d",&weight);
    printf("%d",weight);

    for (int i=1; i<=5; i++ ){
        printf("i = %d\n", i);
    }

    int n = 0;
    while (1){
        printf("%d\n",n);

        if (n == 10){
            break;
        }
        n++;
    }


    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            printf("i = %d, j = %d\n", i, j);
        }
    }

    */
    


    return 0;
}

