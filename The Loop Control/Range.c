#include <stdio.h>

int main()
{
    int n, i;
    int numbers[100];
    int min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    min = max = numbers[0];

    for (i = 1; i < n; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }
    printf("Range = %d\n", max - min);

    return 0;
}