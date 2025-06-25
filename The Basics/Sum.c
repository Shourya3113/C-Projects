#include <stdio.h>

int main()
{
    int a, sum;

    printf("Enter a number: ");
    scanf("%d", &a);

    sum += a % 10;
    a = a / 10;

    sum += a % 10;
    a = a /10;

    sum += a % 10;
    a = a / 10;

    sum += a % 10;
    a = a / 10;

    sum += a % 10;
    
    printf("Sum of the digits = %d\n", sum);
    return 0;
}