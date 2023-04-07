#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    printf("%d\n", argc);

    for(int i=0; i<argc; i++) {
        printf("#%d %s %p\n", i,
             argv[i], argv[i]);
    }
    printf("%p\n", argv[argc]);

    return EXIT_SUCCESS;
}