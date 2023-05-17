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
    int limit = 6;
    int row = 0;
    int col = 0;

    printf("\n");

    for (row = 1; row <= limit; row++)
    {
        for (col = 0; col < row; col++)
        {
            printf("%c", ('F' - col));
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
