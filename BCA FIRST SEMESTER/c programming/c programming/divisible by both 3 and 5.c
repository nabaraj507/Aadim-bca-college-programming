
#include<stdio.h>
void main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a%3==0&&a%5==0)
    {
        printf("%d is divisible by both 3 and 5",a);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5");
    }
}
