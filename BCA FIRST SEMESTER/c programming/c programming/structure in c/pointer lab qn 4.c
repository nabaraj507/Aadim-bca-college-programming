#include <stdio.h>

void calc(int a[], int n, int *sum, float *avg) {
    *sum = 0;
    for (int i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}

int main() {
    int arr[] = {10, 20, 30};
    int sum;
    float avg;

    calc(arr, 3, &sum, &avg);

    printf("Sum = %d\n", sum);
    printf("Avg = %.2f\n", avg);
    return 0;
}
