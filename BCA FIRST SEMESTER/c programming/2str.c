#include <stdio.h>
#include <string.h>

int main()
{
    char mystr[] = "Hello";
    char string_copy[20];
    char str[100];   
    int i = 0;

    strcpy(string_copy, mystr);
    printf("Copied string : %s\n", string_copy);

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   

   
    str[strcspn(str, "\n")] = '\0';

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string : %s\n", str);

    strcat(string_copy, " world");
    printf("(strcat) : %s\n", string_copy);

    return 0;
}
