#include <stdio.h>
#include <math.h>

int is_prime(int number) {
    if(number == 2){
        return 1;
    }
    if(number < 2 || number % 2 == 0){
        return 0;
    }

    for(int divisor = 3; 
        divisor <= sqrt(number);
        divisor += 2) {
            if(number % divisor != 0) {
                return 0;
            }
        }
    return 1;
}

int main() {
    int n;

    scanf("%d", &n);
    printf(is_prime(n) ? "YES\n" : "NO\n");

    return 0;
}