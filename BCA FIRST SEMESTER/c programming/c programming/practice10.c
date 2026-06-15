#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        sum=n*(n+1)/2+sum;
    }
    printf("sum of the number is : %d",sum);
}
