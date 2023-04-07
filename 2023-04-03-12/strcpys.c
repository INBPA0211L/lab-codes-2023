#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int count = 0;
    for(int i=1; i<argc; i++) {
        if(strcmp(argv[i], "strcpy") == 0) {
            count++;
        }
    }
    printf("%d\n", count);

    return EXIT_SUCCESS;
}