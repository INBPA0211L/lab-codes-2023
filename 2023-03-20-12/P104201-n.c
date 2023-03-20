#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int *numbers, int length) {
    int is_valid = 1;
    for(int i=0; i<length / 2; i++) {
        if(numbers[i] != numbers[length -1 -i]) {
            is_valid = 0;
        }
    }
    return is_valid;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        int length;
        scanf("%d", &length);

        int numbers[length];
        for(int j=0; j<length; j++) {
            scanf("%d", &numbers[j]);
        }

        puts(is_palindrome(numbers, length) ? "True" : "False");
    }


    return EXIT_SUCCESS;
}