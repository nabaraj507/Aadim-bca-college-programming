#include<stdio.h>
struct Employee
{
    int id;
    int age;
    char name[20];
    float salary;
};
void main()
{
    int i;
    struct Employee E[5];
    for(i=0; i<5; i++)
    {

        printf("\n enter details of employees :");
        printf("\n\t Enter employee id :");
        scanf("%d",&E[i].id);
        printf("\n\t Enter employee name :");
        scanf("%s",&E[i].name);
        printf("\n\t Enter employee age :");
        scanf("%d",&E[i].age);
        printf("\n\t Enter employee salary :");
        scanf("%f",&E[i].salary);
    }
    printf("\n Details of employees\n");
    for(i=0; i<5; i++)
    {
        printf("id is = %d\n",E[i].id);
        printf("name is  %s\n",E[i].name);
        printf("age is = %d\n",E[i].age);
        printf("salary is = %f\n",E[i].salary);
        printf("\n");
    }
}
