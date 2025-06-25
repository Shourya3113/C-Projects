#include <stdio.h>

int main()
{
    int l, b, r;
    float area, perimeter;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    area = 3.14 * r * r;

    printf("Area of the circle: %.2f\n", area);
    return 0;
}