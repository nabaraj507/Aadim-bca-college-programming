//WAP to check whether a number is even or odd using if-else.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    if(n%2==0){
        printf("The number is even:");
    }
    else{
        printf("This number is odd.");
    }
    return 0;
}
