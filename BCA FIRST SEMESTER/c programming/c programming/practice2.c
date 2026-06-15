#include<stdio.h>
int main()
{
    int age,salary;
    printf("enter age of the clint : ");
    scanf("%d",&age);
    printf("enter salary of man : ");
    scanf("%d",&salary);
    if(0<age&&age>=25)
    {
        if(salary>=50000)
        {
            printf("you can get loan");
        }
        else{
            printf("you can't get loan");
        }
    }
    else{
        printf("age is invalid");
    }
    return 0;
}
