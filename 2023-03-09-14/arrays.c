#include <stdio.h>

void print_array(int *numbers, int length) {
    // printf("%d\n", sizeof(numbers));
    
    for(int i=0; i<length; i++) {
        if(i > 0) {
            printf(" ");
        }
        printf("%d", numbers[i]);
    }
    printf("\n");
}

int main() {
    // int numbers[5];
    int numbers[5] = {0, 1, 2, 3, 4};
    // int numbers[] = {0, 1, 2, 3, 4};
    // int numbers[5] = {0}; 

    for(int i=0; i<5; i++) {
        printf("%d %p\n", numbers[i], &numbers[i]);
    }

    printf("%d %d\n", sizeof(int), sizeof(numbers));

    printf("=============\n");

    int *element = &numbers[0];
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);

    printf("=============\n");

    for(int i=-3; i<8; i++) {
        printf("#%d %d %p\n", i, numbers[i], &numbers[i]);
    }

    printf("=============\n");

    for(int i=0; i<5; i++) {
        printf("#%d %d %p %d %d\n", i, numbers[i], &numbers[i], *(numbers + i), i[numbers]);
    }

    print_array(numbers, 5);
    print_array(numbers, sizeof(numbers) / sizeof(int));

    return 0;
}