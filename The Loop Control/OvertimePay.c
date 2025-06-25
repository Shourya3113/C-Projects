#include <stdio.h>

int main()
{
    int hoursWorked, employees = 10, ratePerHour = 12, overtimePay;
    for (int i = 1; i <= employees; i++)
    {
        printf("Enter the number of hours worked by employee %d: ", i);
        scanf("%d", &hoursWorked);

        if (hoursWorked > 40)
        {
            overtimePay = (hoursWorked - 40) * ratePerHour;
            printf("Employee %d worked %d hours and earned an overtime pay of Rs. %d\n", i, hoursWorked, overtimePay);
        }
    }
}