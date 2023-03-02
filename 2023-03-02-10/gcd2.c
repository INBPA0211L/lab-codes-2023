#include <stdio.h>

int gcd(int a, int b){
    int r;
    for(
        ; // scanf("%d %d", &a, &b)
        r = a % b;
        a = b, b = r
    );
    return b;
}

int main() {
    int a, b, r;

    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    printf("%d\n", gcd(b, a));
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    printf("%d\n", gcd(b, a));

    /*
    while(r = a % b){
    // while((r = a % b) != 0){
        a = b;
        b = r;
    }
    */

    // printf("%d\n", b);

    return 0;
}