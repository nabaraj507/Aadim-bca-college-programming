#include<stdio.h>
void main()
{
    float marks;
    printf("Enter marks : ");
    scanf("%f",&marks);
    if(100>=marks&&marks>=80)
    {
        printf("you scored grade : A");

    }
     else if(80>marks&&marks>=60)
    {
        printf("you scored grade : B");
    }
    else if(60>marks&&marks>=40)
    {
        printf("you scored grade : C");
    }
    else if(40>marks&&marks>=0)
    {
        printf("Congratulations! you are successfully failed");
    }

    else{
        printf("enter the valid number between 0-100");
    }
}
