#include <stdio.h>

int main()
{
    int f, c;

    printf("Enter temperature in Fahrenhiet: ");
    scanf("%d", &f);

    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsuis: %d\n", c);
    return 0;
}