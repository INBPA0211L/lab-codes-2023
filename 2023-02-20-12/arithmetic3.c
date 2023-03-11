#include <stdio.h>
#include <stdlib.h>

int main() {
    while(1){
        int a, b;
        char operator;

        scanf("%d %c %d", &a, &operator, &b);
        if(a == 0 || b == 0){
            break;
        }

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