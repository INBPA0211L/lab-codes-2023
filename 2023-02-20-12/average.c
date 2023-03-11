#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    int sum = 0;
    for(int i=0; i<n; i++){
        int number;
        scanf("%d", &number);
        sum += number; // sum = sum + number;
    }

    printf("%.2f\n", sum / (float) n);
    printf("%.2f\n", (float)sum / n);
    printf("%.2f\n", (float)sum / (float)n);
    printf("%.2f\n", (float)(sum / n)); // NOT OK

    return 0;
}