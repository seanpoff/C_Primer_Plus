/* Use nested loops to produce the following pattern:
 *
 *  $
 *  $$
 *  $$$
 *  $$$$
 *  $$$$$
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int LIMIT = (6);

    int row = 0;
    int col = 0;

    printf("\n");

    for (row = 1; row < LIMIT; row++)
    {
        for (col = 0; col < row; col++)
        {
            printf("$");
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
