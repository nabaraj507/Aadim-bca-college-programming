// Accept 100 numbers.store odd to odd.txt and even to even to even.txt and display odd numbers.

#include <stdio.h>

int main() {
    int n[100], i;
    FILE *odd, *even;

    /* Input 100 numbers */
    printf("Enter 100 numbers:\n");
    for (i = 0; i < 15; i++)
        scanf("%d", &n[i]);

    /* Open files */
    odd  = fopen("odd.txt",  "w");
    even = fopen("even.txt", "w");

    /* Store odd and even */
    for (i = 0; i < 15; i++) {
        if (n[i] % 2 == 0)
            fprintf(even, "%d\n", n[i]);
        else
            fprintf(odd, "%d\n", n[i]);
    }

    /* Close files */
    fclose(odd);
    fclose(even);

    /* Display odd numbers */
    int num;
    odd = fopen("odd.txt", "r");

    printf("\nOdd Numbers:\n");
    while (fscanf(odd, "%d", &num) != EOF)
        printf("%d ", num);

    printf("\n");
    fclose(odd);

    return 0;
}
