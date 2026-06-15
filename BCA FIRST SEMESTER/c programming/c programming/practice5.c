#include<stdio.h>
void main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        printf("%d \n",i);
        sum=sum+i;
    }
    printf("the sum of natural numbers is : %d",sum);
}
