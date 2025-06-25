#include <stdio.h>

int main()
{
   int num, i, prime;

   printf("All prime numbers between 1 and 300 are:\n");
   for (num = 2; num <= 300; num++)
   {
        prime = 1;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", num);
        }
   }
   printf("\n");
   return 0;
}