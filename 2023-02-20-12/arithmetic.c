#include <stdio.h>

int main() {
    int n;

    // printf("...");

    // int m;

    scanf("%d", &n);
    // printf("%d\n", n);

    for(int i=0; i<n; i++){
        int a, b;
        char operator;

        scanf("%d %c %d", &a, &operator, &b);

        /*
        
        if(operator == '+'){
            printf("%d\n", a + b);
        }

        if(operator == '-'){
            printf("%d\n", a - b);
        } else {
            if(operator == '*') {
                printf("%d\n", a * b);
            } else {
                if() {

                }
            }
        }
        */

        if(operator == '+'){
            printf("%d\n", a + b);
        } else if(operator == '-'){
            printf("%d\n", a - b);
        } else if(operator == '*') {
            printf("%d\n", a * b);
        } else if(operator == '/') {
            printf("%d\n", a / b);
        } else {
            printf("%d\n", a % b);
        }
    }

    return 0;
}