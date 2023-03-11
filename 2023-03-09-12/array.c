#include <stdio.h>

void print_array(int *numbers, int length) {
    printf("%d\n", sizeof(numbers));
}

int main() {
    // int numbers[5];
    // int numbers[5] = {0, 1, 2, 3, 4};
    // int numbers[] = {0, 1, 2, 3, 4};
    int numbers[5] = {0};

    for(int i=0; i<5; i++) {
        numbers[i] = i;
    }
    
    for(int i=0; i<5; i++){
        printf("%d\n", numbers[i]);
    }

    printf("%d %d\n", sizeof(int), sizeof(numbers));

    printf("========\n");

    for(int i=0; i<5; i++){
        printf("%d %p\n", numbers[i], &numbers[i]);
    }

    printf("========\n");

    int *element = &numbers[0];
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);
    element++;
    printf("%d %p\n", *element, element);

    printf("========\n");

    for(int i=-5; i<10; i++){
        printf("%d %p %d %d\n", numbers[i], 
            &numbers[i], *(numbers + i), i[numbers]);
    }

    print_array(numbers);

    return 0;
}