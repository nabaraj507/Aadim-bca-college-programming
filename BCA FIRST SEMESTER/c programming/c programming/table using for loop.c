#include <stdio.h>

int main() {
    int number, i;

    // Prompt the user to enter a number
    printf("Enter an integer: ");

    // Read the input number from the user
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);

    // Use a for loop to iterate from 1 to 10
    for (i = 1; i <= 10; ++i) {
        // Print the multiplication expression
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
