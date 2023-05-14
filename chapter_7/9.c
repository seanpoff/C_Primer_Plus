/* Write a program that accepts a positive integer as input and then displays
 * all the prime numbers smaller than or equal to that number.
 */
#include <stdio.h>
/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int num = 0;
    int div = 0;
    int limit = 0;
    int isprime = 0;

    printf("Enter a positive integer: ");

    while ((1 == (scanf("%d", &limit))) && (0 < limit))
    {
        if (1 > limit)
        {
            printf("There are no primes.\n");
        }
        else
        {
            printf("Here are the primes through %d:\n\n", limit);

            for (num = 2; num <= limit; num++)
            {
                for (div = 2, isprime = 1; (div * div) <= num; div++)
                {
                    if (0 == (num % div))
                    {
                        isprime = 0;
                    }
                }

                if (1 == isprime)
                {
                    printf("%d ", num);
                }
            }
        }

        printf("\n\nEnter another number (any other key to quit).\n");
    }

    return 0;
}
