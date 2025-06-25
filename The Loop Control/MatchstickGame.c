#include <stdio.h>

int main()
{
    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: You can pick 1, 2, 3, or 4 matchsticks. Whoever picks the last matchstick loses.\n");

    while (matchsticks > 1)
    {
        printf("\nThere are %d matchsticks left. Pick 1, 2, 3, or 4 matchsticks: ", matchsticks);
        scanf("%d", &user_pick);

        if (user_pick < 1 || user_pick > 4)
        {
            printf("Invalid choice! You must pick between 1 and 4 matchsticks.\n");
            continue;
        }
        matchsticks -= user_pick;

        if (matchsticks == 1)
        {
            printf("\nYou are forced to pick the last matchstick. You lose!\n");
            break;
        }

        computer_pick = 5 - user_pick;
        printf("Computer picks %d matchstick(s).\n", computer_pick);

        matchsticks -= computer_pick;

        if (matchsticks == 1)
        {
            printf("\nComputer is forced to pick the last matchstick. You win!\n");
            break;
        }
    }
    return 0;
}