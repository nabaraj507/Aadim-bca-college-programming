//2 dimensional array


#include<stdio.h>
int main(){
    int arr[3][3];
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            printf("Enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);

        }
        
    }
    printf("Enter matrix are: \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    
}