#include <stdio.h>
#include <stdlib.h>

void print_matrix(int *numbers, 
    int rows, int cols) {

    for(int i=0; i<rows; i++) {
        printf("%d", numbers[i * cols + 0]);
        for(int j=1; j<cols; j++) {
            printf(" %d", numbers[i * cols + j]);
        }
        puts("");
    }
}

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);
    int numbers[rows][cols];

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    for(int i=0; i<rows; i++) {
        printf("%d", numbers[i][0]);
        for(int j=1; j<cols; j++) {
            printf(" %d", numbers[i][j]);
        }
        puts("");
    }

    puts("");

    print_matrix(&numbers[0][0], rows, cols);

    return EXIT_SUCCESS;
}