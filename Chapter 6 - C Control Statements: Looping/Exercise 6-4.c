/* Use nested loops to produce the following pattern:
 *
 *      A
 *      BC
 *      DEF
 *      GHIJ
 *      KLMNO
 *      PQRSTU
 *
 * If your system doesn't encode letters in numeric order, see the suggestion
 * in programming exercise 6-3.c.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char start = 'A';

    int row = 0;
    int col = 0;
    int limit = 6;

    printf("\n");

    for (row = 1; row <= limit; row++)
    {
        for (col = 0; col < row; col++, start++)
        {
            printf("%c", start);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
