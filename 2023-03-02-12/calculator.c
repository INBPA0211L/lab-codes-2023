#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // printf("%d\n", n);

    for(int i=0; i<n; i++){
        int a, b;
        char op;
        scanf("%d %c %d", &a, &op, &b);

        switch(op) {
            case '-':
                printf("%d\n", a - b);
                break;
            case '+':
                printf("%d\n", a + b);
                break;  
            default:
                printf("%d\n", a % b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '/':
                printf("%d\n", a / b);
                break;
        }
    }

    return 0; asfsafsafs
}