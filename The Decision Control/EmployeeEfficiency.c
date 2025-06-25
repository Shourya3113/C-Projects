#include <stdio.h>

int main()
{
    int hours;

    printf("Enter the number of hours worked: ");
    scanf("%d", &hours);
    if ( hours >= 2 && hours <= 3)
    {
        printf("The employee is Highly Efficient.\n");
    }
    else if (hours >= 3 && hours <= 4)
    {
        printf("The employee need to improve speed.\n");
    }
    else if (hours >= 4 && hours <= 5)
    {
        printf("The employee will be given training to improve speed.\n");
    }
    else if (hours > 5)
    {
        printf("Unfortunately, we have to let you go.");
    }
    return 0;
}