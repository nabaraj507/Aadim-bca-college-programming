//WAP using nested loops to generate a multiplication table from 1 to 5.
#include <stdio.h>

int main() {
    int i, j;
    printf("Multiplication Table from 1 to 5:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
