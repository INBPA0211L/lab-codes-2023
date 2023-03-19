#include <stdio.h>
#include <stdlib.h>

int count_of_odds(int *numbers, int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    while (1)
    {
        int length;
        scanf("%d", &length);
        if(!length) {
            break;
        }
        
        int numbers[length];
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &numbers[j]);
        }
        printf("%d\n", count_of_odds(numbers, length));
    }

    return EXIT_SUCCESS;
}