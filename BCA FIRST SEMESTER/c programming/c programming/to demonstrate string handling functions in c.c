#include <stdio.h>
#include <string.h> // Required for string handling functions

int main() {
    char str1[50] = "Hello";
    char str2[50] = " World";
    char str3[50];
    int len, cmp;

    // 1. strlen() function: Calculate the length of a string
    len = strlen(str1);
    printf("Length of string 1 is : %d\n",len);

    // 2. strcpy() function: Copy one string to another
    strcpy(str3, str1);
    printf("Copied string 3 is : %s\n", str1, str3);

    // 3. strcat() function: Concatenate two strings
    strcat(str1, str2); // Appends str2 to str1, the result is stored in str1
    printf("Concatenated string 1: %s\n", str1);

    // 4. strcmp() function: Compare two strings
    cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal. Strcmp returned: %d\n", cmp);
    }

    // Additional functions (commented out, require non-standard headers or might be deprecated)
    // strlwr(str1); // Converts to lowercase (not standard C, might need <conio.h> or a different approach)
    // strupr(str1); // Converts to uppercase (not standard C, might need <conio.h> or a different approach)
    // strrev(str1); // Reverses the string (not standard C, might need <conio.h> or a different approach)

    return 0;
}

