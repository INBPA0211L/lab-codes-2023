#include <stdio.h>

int gcd(int a, int b) {
    int r;

    while(r = a % b) {
        a = b;
        b = r;
    }

    return b;
}

int main() {
    int a, b, r;

    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));

    return 0;
}