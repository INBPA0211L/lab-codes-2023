#include <stdio.h>
#include <stdlib.h>

void print_array(int *numbers, int length)
{
    printf("%d", numbers[0]);
    for (int i = 1; i < length; i++)
    {
        printf(" %d", numbers[i]);
    }
    putchar('\n');
}

void print_matrix(int *numbers, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        // printf("%d", numbers[i * cols + 0]);
        // for (int j = 1; j < cols; j++)
        // {
        //     printf(" %d", numbers[i * cols + j]);
        // }
        // putchar('\n');
        print_array(numbers + (i * cols), cols);
    }
}

int main()
{
    int numbers1[3][4] = {{1, 2, 3, 4},
                          {2, 4, 3, 1},
                          {3, 1, 4, 2}};

    print_matrix(&numbers1[0][0], 3, 4);

    return EXIT_SUCCESS;
}