#include <stdio.h>

int main()
{
    int marks[5];
    float percentage, totalMarks;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);

    totalMarks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    percentage = (totalMarks / 500) * 100;

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}