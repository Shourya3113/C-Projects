#include <stdio.h>

int main()
{
    int l, b, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    if (area > perimeter)
    {
        printf("Area is greater than Perimeter\n");
    }
    else if (area < perimeter)
    {
        printf("Perimeter is greater than Area\n");
    }
    else
    {
        printf("Area is equal to Perimeter\n");
    }
}