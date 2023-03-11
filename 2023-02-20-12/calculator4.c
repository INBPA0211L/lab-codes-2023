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

        switch(op){
            case '+':
                printf("+ %d\n", a + b);
                break;
            case '-':
                printf("- %d\n", a - b);
                break;
            case '*':
                printf("* %d\n", a * b);
                break;
            case '/':
                printf("/ %d\n", a / b);
                break;
        }
    }

    printf("bye\n");

    return 0;
}