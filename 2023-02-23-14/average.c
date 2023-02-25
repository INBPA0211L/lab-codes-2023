#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i=0; i<n; i++){
        int value;
        scanf("%d", &value);
        sum += value; // sum = sum + value;
    }

    // calculating the avg of 1 and 2
    printf("%d\n", sum / n); // :(  1
    printf("%f\n", sum / n); // :(  0.00000
    printf("%f\n", sum / (double) n); // 1.50000
    printf("%f\n", (double) sum / n); // 1.50000
    printf("%f\n", (double) sum / (double) n); // 1.50000
    printf("%f\n", (double) (sum / n)); // 1.00000

    return 0;
}