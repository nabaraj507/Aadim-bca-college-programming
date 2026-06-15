#include<stdio.h>
     int main()
     {
        int num[5]={10,20,30,40,50};
        
        printf("All elements in the array:\n");
          for (int i = 0; i < 5; i++) 
          {
            printf("%d ", num[i]);
          }
        printf("\n");
        return 0;
     }