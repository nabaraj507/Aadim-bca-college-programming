#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter number : ");
    scanf("%d",&a);
    do
    {
        printf("%d*%d=%d",a,i,a*i);
        i++;
        printf("\n");
    }while(i<=10);

    return 0;
}
