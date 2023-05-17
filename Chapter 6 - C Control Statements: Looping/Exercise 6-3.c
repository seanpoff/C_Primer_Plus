/* Use nested loops to produce the following pattern:
 *
 * F
 * FE
 * FED
 * FEDC
 * FEDCB
 * FEDCBA
 * 
 * Note: If your system doesn't use ASCII or some other code that encodes
 * letters in numeric order, you can use the following to initialize a
 * character array to the letters of the alphabet:
 * 
 *      char lets[27] = "ABCDEFGHIJKLKMNOPQRSTUVWXYZ";
 * 
 * Then you can use the array index to select individual letters; for example,
 * lets[0] is 'A', and so on.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char let = 'F';
    char end = 'A';
    char start = 'F';

    printf("\n");

    for (end = let; end >= 'A'; end--)
    {
        for (start = let; start >= end; start--)
        {
            printf("%c", start);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
