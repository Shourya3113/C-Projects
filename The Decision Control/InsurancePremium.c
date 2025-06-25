#include <stdio.h>

int main()
{
    int health, age, lives, sex;
    float premium;

    printf("Enter the health status (1 for excellent, 2 for poor): ");
    scanf("%d", &health);
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("Enter 1 for city, 2 for village: ");
    scanf("%d", &lives);
    printf("Enter 1 for male, 2 for female: ");
    scanf("%d", &sex);

    if (health == 1 && age > 25 && age < 35 && lives == 1 && sex == 1)
    {
        premium = 0.004;
        printf("The premium is Rs %.2f per thousand.\n", premium * 1000);
        printf("The policy amount cannot exceed Rs 200000.\n");
    }
    else if (health == 1 && age > 25 && age < 35 && lives == 1 && sex == 2)
    {
        premium = 0.003;
        printf("The premium is Rs %.2f per thousand.\n", premium * 1000);
        printf("The policy amount cannot exceed Rs 100000.\n");
    }
    else if (health == 2 && age > 25 && age < 35 && lives == 2 && sex == 1)
    {
        premium = 0.006;
        printf("The premium is Rs %.2f per thousand.\n", premium * 1000);
        printf("The policy amount cannot exceed Rs 10000.\n");
    }
    else
    {
        printf("The person is not eligible for insurance.\n");
    }

    return 0;
}