#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
    {
        printf("The points are collinear (fall on one straight line).\n");
    }
    else
    {
        printf("The points are not collinear.\n");
    }

    return 0;
}