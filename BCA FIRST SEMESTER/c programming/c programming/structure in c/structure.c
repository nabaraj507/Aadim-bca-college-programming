#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[150];
    float salary;
    char address[150];
    char phone[20];
};
int main()
{
    struct Employee e1;

    e1.id = 101;
    strcpy(e1.name,"Nabaraj Shrestha");
    e1.salary = 40000;
    strcpy(e1.address,"Ramechhap");
    strcpy(e1.phone,"9823098430");
    printf(" id = %d\n Name = %s\n Salary = %f\n address = %s\n phone no = %s\n ",e1.id,e1.name,e1.salary,e1.address,e1.phone);

    return 0;
}
