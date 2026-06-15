#include<stdio.h>
void main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even number",a);
    }
    else{
        printf("given number is odd");
    }
}
