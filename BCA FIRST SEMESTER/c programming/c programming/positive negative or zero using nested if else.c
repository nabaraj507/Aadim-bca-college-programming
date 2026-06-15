

#include<stdio.h>
void main()
{
    int k;
    printf("Enter a number :");
    scanf("%d",&k);
    if(k>=0)
    {
        if(k>0)
        {
            printf("Entered number is positive");
        }
        else

        {
            printf("Enter number is equal to 0");
        }
    }
    else
    {
        printf("Entered number is negative");
    }
}
