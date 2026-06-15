#include <stdio.h>

int main() {

    int a, b, sum, diff, product;
    float division;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    sum      = a + b;
    diff     = a - b;
    product  = a * b;
    division = (float)a / b;

    printf("Sum:      %d\n",   sum);
    printf("Diff:     %d\n",   diff);
    printf("Product:  %d\n",   product);
    printf("Division: %.2f\n", division);

    if (a == b)
        printf("a and b are equal\n");
    else
        printf("a and b are not equal\n");

    a++;
    b--;

    printf("After a++: %d\n", a);
    printf("After b--: %d\n", b);

    return 0;
}
