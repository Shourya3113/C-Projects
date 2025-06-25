#include <stdio.h>
int main()
{
    int decimal, remainder, i = 0;
    int octal[100];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    if (i == 0)
    {
        printf("0");
    }
    printf("\n");

    return 0;
}