#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int max = atoi(argv[1]);
    for(int i=2; i<argc; i++) {
        int number = atoi(argv[i]);
        if(number > max) {
            max = number;
        }
    }
    printf("%d\n", max);

    return EXIT_SUCCESS;
}