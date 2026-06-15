#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;
    int *arr;

    /* Input size */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* DMA using malloc */
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Input elements */
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("  Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    /* Find largest and smallest */
    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    /* Display result */
    printf("\nEntered list: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nLargest  number = %d\n", max);
    printf("Smallest number = %d\n", min);

    /* Free memory */
    free(arr);

    return 0;
}
