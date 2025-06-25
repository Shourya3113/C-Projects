#include <stdio.h>

int main()
{
    int i, j;
    float sum = 0.0, factorial;

    for (i = 1; i <=7; i++)
    {
        factorial = 1.0;

        for (j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += i / factorial;
    }

    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}