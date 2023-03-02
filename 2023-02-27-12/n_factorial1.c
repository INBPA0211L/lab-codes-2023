#include <stdio.h>

int n_factorial(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n_factorial(n));
    return 0;
}