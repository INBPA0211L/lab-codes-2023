#include <stdio.h>
#include <stdlib.h>

int main() {
    while(1) {

        int a, b;
        char op;

        scanf("%d %c %d", &a, &op, &b);

        if(a == 0 || b == 0){
            break;
        }

        if(op == '+')
            printf("%d\n", a + b);
            printf("asfasf\n");
        else if(op == '-') {
            printf("%d\n", a - b);
        } 
        else if(op == '/') {
            printf("%d\n", a / b);
        }
        else if(op == '*') {
            printf("%d\n", a * b);
        }
        else {
            printf("%d\n", a % b);
        }
    }

    printf("hello\n");

    return 0;
}