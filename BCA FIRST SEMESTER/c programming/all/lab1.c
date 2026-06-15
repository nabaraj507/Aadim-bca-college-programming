/*Lab title: File handling in C
    OBJECTIVE:
    1) To understand text file and binary file in C.
    2) To Perform file read and write operations in C.
    3) To Process numbers in files.
    4) To maintain records inside files and store them permanently.
    5) To use file positioning functions in C.
*/
//1.Write a program that writes Welcome to BCA program into test.txt.
#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    if (fptr ==NULL){
        printf("File cannot be opened");
        return 1;
    }
    fprintf(fptr, "Welcome to BCA program");
    fclose(fptr);
    printf("Test written successfullly");
    return 0;
}
