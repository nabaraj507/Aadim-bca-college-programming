#include <stdio.h>

float area(float r) {
    return 3.14159 * r * r;
}

int main() {
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area of Circle = %.2f\n", area(r));

    return 0;
}
