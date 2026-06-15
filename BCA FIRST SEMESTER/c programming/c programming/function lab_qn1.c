

#include <stdio.h>

void calculate(int a, int b) {
    int choice;

    printf("\n1. Sum");
    printf("\n2. Difference");
    printf("\n3. Division");
    printf("\n4. Modulus");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum        = %d\n", a + b);
            break;
        case 2:
            printf("Difference = %d\n", a - b);
            break;
        case 3:
            printf("Division   = %.2f\n", (float)a / b);
            break;
        case 4:
            printf("Modulus    = %d\n", a % b);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b);

    return 0;
}
