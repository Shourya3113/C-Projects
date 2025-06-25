#include <stdio.h>

int main()
{
    int r, s, a;
    printf("Enter the age of Ram, Shyam, and Ajay: ");
    scanf("%d %d %d", &r, &s, &a);

    if (r < s && r < a)
    {
        printf("Ram is the youngest.\n");
    }
    else if (s < r && s < a)
    {
        printf("Shyam is the youngest.\n");
    }
    else if (a < r && a < s)
    {
        printf("Ajay is the youngest.\n");
    }
    else
    {
        printf("There is no single youngest person.\n");
    }
}