#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    int *p = malloc(n * sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Numbers you entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}
