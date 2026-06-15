#include<stdio.h>
void main()
{
    float p,t,r,s;
    printf("enter the the value of p : ");
    scanf("%f",&p);
    printf("enter the value of t : ");
    scanf("%f",&t);
    printf("enter the value of r : ");
    scanf("%f",&r);
    s=p*t*r/100;
    printf("the simple interest is :%f",s);
}
