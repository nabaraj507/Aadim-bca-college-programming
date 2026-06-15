// WAP to copy the content of student.txt into info.txt

#include<stdio.h>
int main()
{
FILE *fptr1, *fptr2;
char ch;


fptr1 = fopen("student.txt","r");
fptr2 = fopen("info.txt","w");
//check null
if(fptr1==NULL || fptr2==NULL)
{
printf("Error opening file");
return 1;
}

while( (ch = fgetc(fptr1))!= EOF)
{
fputc(ch,fptr2);
}
fclose(fptr1);
fclose(fptr2);
printf("content copied successfully!");
return 0;
}
