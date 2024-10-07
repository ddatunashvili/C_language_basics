#include <stdio.h>
#include <string.h>

int main(){
    char str[5] = "david";
    str[6] = 'y';
    // char *str2 = "hello";
    // printf("%x\n", str2 );
    printf("%s\n", str );
    printf("%c\n", str[0] );
    printf("%c\n", str[1] );
    printf("%c\n", str[2] );
    printf("%c\n", str[3] );
    printf("%c\n", str[4] );
    printf("%c\n", str[5] );
    printf("%c\n", str[6] );
    printf("%c\n", str[7] );

    char s[] = "hello";

    printf("%c\n", s[2] );
    printf("%c\n", s[3] );
    printf("%c\n", s[4] );
    printf("%c\n", s[5] );
    printf("%c\n", s[6] );
    printf("%c\n", s[7] );
    printf("%c\n", s[8] );
    printf("%s\n", s );

    int l = strlen(s);
    printf("%d", l);
    printf("\n%s", "------------------------------------");
    
    char s1[6] = "bbb";
    char s2[6] = "aaa";

    strcat(s1,s2);

    printf("\n%s", s1);
    printf("\n%s", s2);

    char s3[20];

    strcpy(s3, s1);
    printf("\ncopied: %s\n", s3);

    if (strcmp(s1,s3) == 0){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    for (int i=0; i < strlen(s1); i++){
        printf("%c", s1[i]);
    }
    char name[20];
    printf("\n%s write name: ");

    fgets(name, sizeof(name), stdin); // Reads an entire line, including spaces

    printf("%s",name);
    
    return 0;

}