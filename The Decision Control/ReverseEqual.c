#include <stdio.h>

int main()
{
    int num, original, rev = 0;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

original = num;

    rev += (num % 10) * 10000;
    num /= 10;
    rev += (num % 10) * 1000;
    num /= 10;
    rev += (num % 10) * 100;
    num /= 10;
    rev += (num % 10) * 10;
    num /= 10;
    rev += (num % 10) * 1;
    
    if (original == rev)
    {
        printf("The number is equal to its reverse.\n");
    }
    else
    {
        printf("The number is not equal to its reverse.\n");
    }
}