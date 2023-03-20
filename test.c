#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int k = 2; k <= sqrt(n); k++)
    {
        if (n % k == 0)
        {
            return 0;
        }
    }
    return 1;
}

int count_of_primes(int *numbers, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (is_prime(numbers[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int len;
    while (scanf("%d", &len) != EOF)
    {
        int numbers[len];
        for (int j = 0; j < len; j++)
        {
            scanf("%d", &numbers[j]);
        }

        int count = count_of_primes(numbers, len);
        printf("%d\n", count);
    }

    return 0;
}
// End//