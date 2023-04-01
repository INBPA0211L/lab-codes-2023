#include <stdio.h>
#include <stdlib.h>

int foo(int *numbers, int rows, int cols)
{
    if (rows != cols)
    {
        return 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (numbers[i * cols + j] != numbers[j * cols + i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int rows, cols;

    scanf("%d %d\n", &rows, &cols);
    int numbers[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    puts(foo(&numbers[0][0], rows, cols) ? "YES" : "NO");

    return EXIT_SUCCESS;
}