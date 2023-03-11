#include <stdio.h>
#include <stdlib.h>

int main() {
    for(;;){
        int a, b;
        char operator;

        if(scanf("%d %c %d", &a, &operator, &b) == EOF){
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