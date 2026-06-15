// we are given integer values in a file number.txt now we need to find prime numbers and store them in prime.txt
#include<stdio.h>

int isPrime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }

    }
    return 1;
}
int main()
{
    FILE *fptr1, *fptr2;
    int num;
    fptr1=fopen("Number.txt", "r");
    fptr2=fopen("Prime.txt", "w");

    if(fptr1 == NULL|| fptr2 == NULL)
    {
        printf("cannot open the file");
        return 1;
    }

    while(fscanf(fptr1, "%d", &num)!= EOF)
    {
        if(isPrime(num))
        {
            fprintf(fptr2, "%d\t", num);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    printf("prime numbers written to prime.txt successfully \n");
    return 0;
}
