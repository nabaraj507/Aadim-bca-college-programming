#include<stdio.h>
void main()
{
    char op;
    float num1,num2;
    printf("Enter operator(+,-,*,/) : ");
    scanf("%s",&op);
    printf("Enter num1 and num2 : ");
    scanf("%f%f",&num1,&num2);
    switch(op)
    {
    case '+':
        printf("%.1f+%.1f = %.1f",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.1f-%.1f = %.1f",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.1f*%.1f = %.1f",num1,num2,num1*num2);
        break;
    case '/':
        printf("%.1f/%.1f = %.1f",num1,num2,num1/num2);
        break;
    default:
        printf(" Invalid operator ! Enter the operator (+,-,*,/)");


    }
}
