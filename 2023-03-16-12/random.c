#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *numbers, int length, 
                int min, int max){

    for(int i=0; i<length; i++) {
        numbers[i] = rand()
             % (max - min) + min;
    }
}

void print_array(int *numbers, int length) {
    printf("%d", numbers[0]);
    for(int i=1; i<length; i++) {
        printf(" %d", numbers[i]);
    }
    puts("");
}

int main() {
    srand(time(NULL));
    int numbers[10];
    fill_array(numbers, 
        sizeof(numbers) / sizeof(int),
        1, 10);
    print_array(numbers, 10);

    return 0;
}