#include <stdio.h>
#include <limits.h>

int main() {
    // printf("%d\n", INT_MAX);

    int value;
    int minimum = INT_MAX;

    while(scanf("%d", &value) != EOF){
        if(value < minimum) {
            minimum = value;
        }
    }

    return 0;
}