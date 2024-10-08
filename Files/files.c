
#include <stdio.h>

#define MAX_LINE_LENGTH 200

void readLines(const char *filename){
    FILE *filepointer = fopen(filename, "r");

    if (filename == NULL){
        perror("error opening file");
        return;
    }

    // create line
    char line[MAX_LINE_LENGTH];

    // Read lines until the end of the file
    // get line and print until line length will be NULL
    while ( fgets(line, sizeof(line), filepointer) != NULL){
        printf("%s", line);
    }
    fclose(filepointer);
    
}

int main() {

    FILE *filepointer;

    filepointer= fopen("data.txt", "w");
    fprintf(filepointer, "hello!\n"); //write
    fputs("hello david!\n", filepointer);//write
    fclose(filepointer);

    filepointer = fopen("data.txt", "r");

    char name[200];

    fscanf(filepointer, "%200s", name);

    printf("%s",name);



    fclose(filepointer);

    printf("\n%s","------------------\n");
    readLines("data.txt");
    return 0;

}