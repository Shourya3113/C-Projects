#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap using a temporary variable
    c = a;
    a = b;
    b = c;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}