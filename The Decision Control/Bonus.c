#include <stdio.h>

int main()
{
    int bonus, cy, yj, serv;

    printf("Enter current year and year of joining: ");
    scanf("%d%d", &cy, &yj);

    serv = cy - yj;

    if (serv > 3)
    {
        bonus = 2500;
        printf("Bonus = Rs %d", bonus);
    }
}