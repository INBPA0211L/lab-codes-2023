#include <stdio.h>

void print_array(int *numbers, int length){
    // printf("%d\n", sizeof(numbers));
    for(int i=0; i<length; i++){
        if(i > 0) {
            printf(" ");
        }
        printf("%d", numbers[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5];

    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    numbers[3] = 3;
    numbers[4] = 4;

    for(int i=0; i<5; i++){
        printf("%d %p\n", numbers[i], &numbers[i]);
    }
    printf("%d %d\n", sizeof(numbers), sizeof(numbers[0]));

    int numbers2[] = {0, 1, 2, 3};
    printf("%d\n", sizeof(numbers2));

    printf("==========\n");
    int numbers3[40] = {0};
    for(int i=0; i<10; i++){
        printf("%d %p\n", numbers3[i], &numbers3[i]);
    }
    printf("%d\n", sizeof(numbers3));

    int *element = &numbers[0];
    printf("%p\n", element);
    element++;
    printf("%p\n", element);
    element++;
    printf("%p\n", element);

    numbers[9] = 25;
    numbers[-2] = 19;
    printf("%d %d\n", numbers[9], numbers[-2]);

    printf("%d %d\n", numbers[3], 3[numbers]);


    printf("======\n");
    print_array(numbers, 5);
    print_array(numbers, sizeof(numbers) / sizeof(int));


    return 0;
}