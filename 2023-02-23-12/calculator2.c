#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    char op;
    while(scanf("%d %c %d", &a, &op, &b) != EOF) {
        if(op == '+'){
            printf("%d\n", a + b);
        } else if(op == '-'){
            printf("%d\n", a - b);
        } else if(op == '*'){
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