/* Have a program request the user to enter an uppercase letter. Use nested
 * loops to produce a pyramid pattern like this:
 *
 *     A
 *    ABA
 *   ABCBA
 *  ABCDCBA
 * ABCDEDCBA
 *
 * The pattern should extend to the character entered. For example, the
 * preceding pattern would result from an input value of E. Hint: Use an outer
 * loop to handle the rows. Use three inner loops in a row, one to handle the
 * spaces, one for printing letters in ascending order, and one for printing
 * letters in descending order. If your system doesn't use ASCII or a similar
 * system that represents letters in strict number order, see the suggestion in
 * programming exercise 6-3.c.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char end = 'A';
    char let = 'A';
    char row = 'A';
    char col = 'A';
    char space = 'A';
    char start = 'A';
    char limit = 'A';

    printf("\nEnter an uppercase letter to use as the limit: ");
    let = getchar();

    printf("\n");

    for (row = 'A', limit = let; row <= limit; row++)
    {
        for (space = let; space > row; space--)
        {
            printf(" ");
        }

        for (col = 'A'; col < row; col++)
        {
            printf("%c", col);
        }

        for (start = row, end = 'A'; start >= end; start--)
        {
            printf("%c", start);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
