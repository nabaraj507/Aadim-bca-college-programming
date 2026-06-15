#include <stdio.h>

int main() {
    int n, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        r = n % 10;
        sum += r;
        n /= 10;
    } while (n != 0);

    printf("Sum of digits = %d", sum);
    return 0;
}
