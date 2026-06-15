//Write a program to take two 3X3 matrix from user compute its addition and subtraction and display the result.

#include<stdio.h>
int main()
{
    int A[3][3], B[3][3], sum[3][3],diff[3][3];
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2;j++)
        {
            printf("Enter the value of A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
     for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2;j++)
        {
            printf("Enter the value of B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0; i<=2; i++)
    {
       for(int j=0; j<=2; j++)
    {
        sum[i][j]=A[i][j]+B[i][j];
    } 
    }
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
    {
        diff[i][j]=A[i][j]-B[i][j];
    }
    }
}
int display(int sum[i][j], int diff[i][j])
{
    
}