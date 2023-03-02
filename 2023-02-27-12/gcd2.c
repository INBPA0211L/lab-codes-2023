#include <stdio.h>

int main() {
    int a, b, r;
 
    for(
        scanf("%d %d", &a, &b);
        r = a % b ; 
        a = b , b = r
    );

    printf("%d\n", b);

    return 0;
}