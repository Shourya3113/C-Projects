#include<stdio.h>

int main()
{
    int p, n;
    float r, si;

    p = 1000; // Principal amount
    n = 2; // Time in years
    r = 5.0; // Rate of interest

    si = (p * n * r) / 100; // Simple Interest formula
    printf("Simple Interest = %.2f\n", si); // Print the result
}