#include <stdio.h>

int main()
{
    int amount, hundred, fifty, ten, remaining;

    printf("Enter the amount to withdraw(in hundreds): ");
    scanf("%d", &amount);

    amount *= 100;

    hundred = amount / 100;
    remaining = amount % 100;

    fifty = remaining / 50;
    remaining = remaining % 50;

    ten = remaining / 10;

    printf("Currency Notes to be given:\n");
    printf("$100 notes: %d\n", hundred);
    printf("$50 notes: %d\n", fifty);
    printf("$10 notes: %d\n", ten);

    return 0;
}