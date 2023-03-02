#include <stdio.h>
#include <math.h>

int is_prime(int number) {
    if(number == 2){
        return 1;
    } 
    
    if(number < 2 || number % 2 == 0) {
        return 0;
    } 
    
    for(int i=3; i<=sqrt(number); i+=2){
        if(number % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", is_prime(number) ? "YES" : "NO");

    return 0;
}