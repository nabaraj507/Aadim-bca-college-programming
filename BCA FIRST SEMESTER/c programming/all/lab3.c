//3. Write a progra accept 100 numbers. store odd.txt and even to even.txt and display odd numbers

#include <stdio.h>          

int main() {
    FILE *oddfile, *evenfile;
    int num, i;
    oddfile = fopen("odd.txt", "w");
    evenfile = fopen("even.txt", "w");
    if (oddfile == NULL || evenfile == NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Enter 100 numbers:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            fprintf(evenfile, "%d\n", num);
        } else {
            fprintf(oddfile     , "%d\n", num);
        }
    }
    fclose(oddfile);
    fclose(evenfile);
    
    // Display odd numbers
    oddfile = fopen("odd.txt", "r");
    if (oddfile == NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Odd numbers:\n");
    while (fscanf(oddfile, "%d", &num) != EOF) {
        printf("%d ", num);
    }
    fclose(oddfile);
    
    return 0;
}