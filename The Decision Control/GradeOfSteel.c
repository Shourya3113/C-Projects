#include <stdio.h>

int main()
{
    int hardness, tensile, grade;
    float carbon;

    printf("Enter the hardness of steel: ");
    scanf("%d", &hardness);
    printf("Enter the carbon content of steel: ");
    scanf("%f", &carbon);
    printf("Enter the tensile strength of steel: ");
    scanf("%d", &tensile);

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
    {
        grade = 10;
    }
    else if (hardness > 50 && carbon < 0.7 && tensile <= 5600)
    {
        grade = 9;
    }
    else if (hardness <= 50 && carbon < 0.7 && tensile > 5600)
    {
        grade = 8;
    }
    else if (hardness > 50 && carbon >= 0.7 && tensile > 5600)
    {
        grade = 7;
    }
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
    {
        grade = 6;
    }
    else
    {
        grade = 5;
    }
    
    printf("Grade of steel is %d.\n", grade);

    return 0;
}