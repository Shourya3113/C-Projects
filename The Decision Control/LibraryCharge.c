#include <stdio.h>

int main()
{
    int days;
    float charge;
    printf("Enter the number of days the book was borrowed: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        charge = 0.50 * days;
    }
    else if (days >= 6 && days <= 10)
    {
        charge = 1.00 * days;
    }
    else if (days >10 && days <= 30)
    {
        charge = 5.00 * days;
    }
    else
    {
        charge = 10.00 * days;
        printf("Your membership has been cancelled.\n");
    }

    printf("The charge for borrowing the book is Rs %.2f.\n", charge);

    return 0;
}