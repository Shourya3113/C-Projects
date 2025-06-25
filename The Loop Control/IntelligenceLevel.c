#include <stdio.h>

int main()
{
    float x, i;
    int y;
    printf("Inteligence Table\n");
    printf("y\t\tx\t\ti\n");
    printf("--------------------------\n");
    for (y = 1; y <= 10; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            i = 2 + (y + 0.5 * x);

            printf("%d\t\t%.1f\t\t%.2f\n", y, x, i);
        }
    }
    return 0;
}