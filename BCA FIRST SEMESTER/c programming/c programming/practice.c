#include<stdio.h>
void main()
{
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    if(0<age&&age<18)
    {
        printf("%d is child",age);
    }
    else if(age>18&&age<59)
    {
        printf("%d is adult age");
    }
    else if(age>59)
    {
        printf("%d is old age",age);
    }
    else{
        printf("given age is invaild");
    }

}
