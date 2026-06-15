#include <stdio.h>
int main()
{


    int k,a;
    printf("Enter two integers: ");
    scanf("%d %d", &k, &a);
    if (k > a) {
        printf("%d is the largest number.\n", k);
    } else if (a > k) {
        printf("%d is the largest number.\n", a);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

