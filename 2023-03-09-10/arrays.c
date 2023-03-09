#include <stdio.h>

void print_array(int *numbers, int length) {
    printf("%d\n", sizeof(numbers));

    for(int i=0; i<length; i++) {
        if(i > 0){
            printf(" ");
        }
        printf("%d", numbers[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5];
    int numbers2[5] = {0, 1, 2, 3, 4};
    int numbers3[] = {0, 1, 2, 3, 4}; // length = 5
    int numbers4[5] = {0}; // other cells will be 0s

    for(int i=0; i<5; i++) {
        numbers[i] = i;
    }

    for(int i=0; i<5; i++) {
        printf("%d %p\n", numbers[i], &numbers[i]);
    }

    printf("%d %d\n", sizeof(int), sizeof(numbers));
    printf("%d\n", sizeof(numbers) / sizeof(int)); // elements

    printf("=========\n");
    for(int i=-5; i<10; i++) {
        printf("%d %p\n", numbers[i], &numbers[i]);
    }

    printf("=========\n");

    int *element = &numbers[0];
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);

    printf("=========\n");

    for(int i=0; i<5; i++) {
        printf("%d %d %d\n", numbers[i], *(numbers + i), i[numbers]);
    }

    // print_array(numbers);
    print_array(numbers, 5);
    print_array(numbers, sizeof(numbers) / sizeof(int));

    return 0;
}