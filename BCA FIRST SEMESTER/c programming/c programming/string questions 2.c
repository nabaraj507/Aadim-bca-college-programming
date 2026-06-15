#include <stdio.h>
#include <string.h>

int main() {
    char original[100], string_copy[100], second[100];
    int i;

    printf("Enter a string: ");
    gets(original);

    // Copy string
    strcpy(string_copy, original);

    // Convert to uppercase
    for(i = 0; original[i] != '\0'; i++) {
        if(original[i] >= 'a' && original[i] <= 'z')
            original[i] = original[i] - 32;
    }
    printf("Uppercase: %s\n", original);

    // Convert to lowercase
    for(i = 0; original[i] != '\0'; i++) {
        if(original[i] >= 'A' && original[i] <= 'Z')
            original[i] = original[i] + 32;
    }
    printf("Lowercase: %s\n", original);

    printf("Enter another string: ");
    gets(second);

    // Concatenate
    strcat(string_copy, second);

    printf("Copied String: %s\n", string_copy);
    printf("Concatenated String: %s\n", string_copy);

    return 0;
}
