#include <stdio.h>

int main() {
    int a, b, r;

    scanf("%d %d", &a, &b);
    
    while(r = a % b){
        a = b;
        b = r;
    }

    printf("%d\n", b);

    return 0;
}