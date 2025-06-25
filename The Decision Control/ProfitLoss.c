#include <stdio.h>

int main()
{
    int cp,sp, total;

    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);
    total = sp - cp;
    if (total > 0)
    {
        printf("Profit: %d\n", total);
    }
    else if (total < 0)
    {
        printf("Loss: %d\n", -total);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
}