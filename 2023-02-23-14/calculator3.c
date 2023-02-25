#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    char op;

    while(1) {
    // for(;;) {

        scanf("%d %c %d", &a, &op, &b);
        if(a == 0 || b == 0){
            break;
        }

        if(op == '+') {
            printf("%d\n", a + b);
        } else if(op == '-') {
            printf("%d\n", a - b);
        } else if(op == '*') {
            printf("%d\n", a * b);
        } else if(op == '/') {
            printf("%d\n", a / b);
        } else {
            printf("%d\n", a % b);
        }
    }

    printf("bye\n");

    return 0;
}