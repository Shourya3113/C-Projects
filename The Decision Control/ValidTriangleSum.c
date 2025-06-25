#include <stdio.h>

int main()
{
    int s1, s2, s3, sum;
    printf("Enter the sides of the triangle: \n");
    scanf("%d %d %d", &s1, &s2, &s3);

    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
    {
        sum = s1 + s2 + s3;
        printf("The triangle is valid and the sum of its sides is %d.\n", sum);
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
    return 0;
}