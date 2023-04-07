#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    puts("Hello, World!");
    printf("%d\n", argc);

    for(int i=0; i<argc; i++) {
        printf("#%d %p %s\n", i,
             argv[i], argv[i]);
    }

    return EXIT_SUCCESS;
}