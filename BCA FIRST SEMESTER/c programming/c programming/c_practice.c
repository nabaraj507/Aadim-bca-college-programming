#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],sum[3][3],diff[3][3],i,j;
    printf("Enter the elements of first matrix-- \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element of [%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("Enter the elements of second matrix-- \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element of [%d][%d] :",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
            diff[i][j]=A[i][j]-B[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);

        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}
