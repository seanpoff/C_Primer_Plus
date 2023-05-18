/* Now modify the program of Exercise 5-5.c so that it computes the sum of the
 * squares of the integers. (If you prefer, how much money you receive if you
 * get $1 the first day, $4 the second day, $9 the third day, and so on. This
 * looks like a much better deal!) C doesn't have a squaring function, but you
 * can use the fact that the square of n is n * n.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int sum = 0;
    int count = 0;
    int limit = 0;
    int square = 0;

    printf("\nHow many iterations should the calculation complete? ");
    scanf("%d", &limit);

    while (limit > count++)
    {
        square = (count * count);
        sum += square;
    }

    printf("\nsum = %d\n\n", sum);

    return 0;
}
