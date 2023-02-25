#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i=0; i<n; i++){
        int value;
        scanf("%d", &value);
        sum += value; // sum = sum + value
    }

    printf("%d\n", sum / n);
    printf("%f\n", sum / n);
    printf("%f\n", sum / (double) n);
    printf("%f\n", (double) sum / n);
    printf("%f\n", (double) sum / (double) n);
    printf("%f\n", (double) (sum / n));

    return 0;
}