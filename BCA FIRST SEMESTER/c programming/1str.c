#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello";
    char dest[20];
    char str1[] = "apple";
    char str2[] = "banana";

    // strcpy
    strcpy(dest, src);
    printf("Copied string (strcpy) : %s\n", dest);

    // strlen
    int len = strlen(src);
    printf("Length of string (strlen) : %d\n", len);

    // strcat
    strcat(str1, str2);
    printf("Concatenated string (strcat) : %s\n", str1);

    // strcmp
    int cmp = strcmp(str1, str2);

    if(cmp == 0)
    {
        printf("Strings are equal\n");
    }
    else if(cmp < 0)
    {
        printf("%s is less than %s\n", str1, str2);
    }
    else
    {
        printf("%s is greater than %s\n", str1, str2);
    }

    return 0;
}