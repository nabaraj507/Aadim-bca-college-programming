#include <stdio.h>

void maximum(int *a, int *b, int *max) {
    if (*a > *b)
        *max = *a;
    else
        *max = *b;
}

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    maximum(&a, &b, &max);

    printf("Maximum = %d\n", max);

    return 0;
}
