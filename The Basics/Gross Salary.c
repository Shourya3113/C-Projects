#include <stdio.h>

int main()
{
    int salary;
    float grossSalary;

    printf("Enter your salary: ");
    scanf("%d", &salary);

    grossSalary = salary * 0.60;

    printf("Your gross salary is: %.2f\n", grossSalary);
    return 0;
}