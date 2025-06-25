#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    (ch >= 'A' && ch <= 'Z') 
        ? printf("The character is an uppercase letter.\n")
        : (ch >= 'a' && ch <= 'z') 
            ? printf("The character is a lowercase letter.\n")
            : printf("The character is a special symbol.\n");

    return 0;
}