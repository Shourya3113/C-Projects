#include <stdio.h>

int main()
{
    int population = 80000;
    int men = (52 * population) / 100;
    int literate_men = (35 * population) / 100;
    int illiterate_men = men - literate_men;

    int total_literate = (48 * population) / 100;
    int literate_women = total_literate - literate_men;

    int women = population - men;
    int illiterate_women = women - literate_women;

    int total_illiterate = illiterate_men + illiterate_women;

    printf("Illiterate men: %d\n", illiterate_men);
    printf("Illirate women: %d\n", illiterate_women);
    printf("Total illiterate people: %d\n", total_illiterate);
    
    return 0;
}