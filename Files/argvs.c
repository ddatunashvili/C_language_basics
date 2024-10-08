
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    readLines(argv[1]);
    return 0;
}
// cmd
// gcc argvs.c -o argvs.exe
// argvs.exe arg1 arg2 arg3
