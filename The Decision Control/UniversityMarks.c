#include <stdio.h>

int main() {
    int marksA, marksB;

    printf("Enter marks obtained in subject A: ");
    scanf("%d", &marksA);

    printf("Enter marks obtained in subject B: ");
    scanf("%d", &marksB);

    if (marksA >= 55 && marksB >= 45) {
        printf("Result: Passed\n");
    }
    else if (marksA < 55 && marksA >= 45 && marksB >= 55) {
        printf("Result: Passed\n");
    }
    else if (marksA >= 65 && marksB < 45) {
        printf("Result: Allowed to reappear in B\n");
    }
    else {
        printf("Result: Failed\n");
    }

    return 0;
}