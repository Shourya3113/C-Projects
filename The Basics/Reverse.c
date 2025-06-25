#include <stdio.h>

int main()
{
    int num, rev;

    printf("Enter a 5-digit  number: ");
    scanf("%d", &num);

    rev = (num % 10) * 10000;
    num = num / 10;

    rev += (num % 10) * 1000;
    num = num / 10;

    rev += (num % 10) * 100;
    num = num / 10;

    rev += (num % 10) * 10;
    num = num / 10;

    rev += num;

    printf("Reversed number = %d\n", rev);
    return 0;
}