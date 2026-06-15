// WAP to check whether a number is positive, negative or zero using nested if.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Entered number is positive.");
    }
    else
    {
        if (n < 0)
        {
            printf("Entered number is negative.");
        }
        else
        {
            printf("Entered number is zero.");
        }
    }
    return 0;
}