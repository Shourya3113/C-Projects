#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        ? printf("The year %d is a leap year.\n", year)
        : printf("The year %d is not a leap year.\n", year);

    return 0;
}