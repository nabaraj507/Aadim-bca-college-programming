/**
LAB TITLE: file handling in c

Ojective:
1) To understand text file and binary file in c
2) To perform file read and write operation
3) To process numbers in files
4) To maintain records inside file and store them permanently
5) To use file positioning functions


**/

// 1.wap that writes welcome to BCA program into test.txt

#include<stdio.h>
int main()
{
FILE *fptr;
fptr = fopen("test.txt","w");
if(fptr == NULL)
{
printf("The file cannot be opened");
return 1;
}
fprintf(fptr,"Welcome to BCA program");

fclose(fptr);

printf("Test written successfully");

return 0;

}

