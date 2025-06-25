#include <stdio.h>

int main()
{
    int number, d1, d2, d3, d4, d5, newNumber;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    d5 = number % 10;
    number = number / 10;

    d4 = number % 10;
    number = number / 10;

    d3 = number % 10;
    number = number / 10;

    d2 = number % 10;
    number = number / 10;

    d1 = number % 10;

    d1 = (d1 + 1) % 10;
    d2 = (d2 + 1) % 10;
    d3 = (d3 + 1) % 10;
    d4 = (d4 + 1) % 10;
    d5 = (d5 + 1) % 10;

    newNumber = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("The incremented number is: %d\n", newNumber);

    return 0;
}