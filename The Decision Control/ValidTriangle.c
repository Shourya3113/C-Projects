#include <stdio.h>

int main()
{
    int degree1, degree2, degree3, sum;
    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d", &degree1, &degree2, &degree3);
    sum = degree1 + degree2 + degree3;
    if (sum == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}