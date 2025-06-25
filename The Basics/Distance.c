#include <stdio.h>

int main()
{
    int a;
    float m, f, i, c;

    printf("Enter the distance (in km): ");
    scanf("%d", &a);

    m = a * 1000; // Convert km to meters
    f = a * 3280.84; // Convert km to feet
    i = a * 39370.1; // Convert km to inches
    c = a * 100000; // Convert km to centimeters

    printf("Distance in meters: %.2f m\n", m);
    printf("Distance in feet: %.2f ft\n", f);
    printf("Distance in inches: %.2f in\n", i);
    printf("Distance in centimeters: %.2f cm\n", c);
    return 0;
}