#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);
    if (character >= 'A' && character <= 'Z')
    {
        printf("The character '%c' is an uppercase letter.\n", character);
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("The character '%c' is a lowercase letter.\n", character);
    }
    else if (character >= '0' && character <= '9')
    {
        printf("The character '%c' is a digit.\n", character);
    }
    else if ((character >= 0 && character <= 47) || (character >= 58 && character <= 64) || (character >= 91 && character <= 96) || (character >= 123 && character <= 127))
    {
        printf("The character '%c' is a special character.\n", character);
    }
    else
    {
        printf("The character '%c' is not recognized.\n", character);
    }
    return 0;
}