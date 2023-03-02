#include <stdio.h>

int n_factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n_factorial(n - 1) * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n_factorial(n));
    return 0;
}