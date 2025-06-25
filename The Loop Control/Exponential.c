#include <stdio.h>

int main()
{
    int base, exponent, result = 1;;
    printf("Enter the 1st number: ");
    scanf("%d", &base);
    printf("Enter the 2nd number: ");
    scanf("%d", &exponent);
    for (int i =1; i <= exponent; i++)
    {
        result *= base;
    }
    printf("\n%d raised to the power of %d is: %d\n", base, exponent, result);
    return 0;
}