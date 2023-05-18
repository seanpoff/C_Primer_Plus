/* Write a program that requests lower and upper integer limits, calculates the
 * sum of all the integer squares from the square of the lower limit to the
 * square of the upper limit, and displays the answer. The program should then
 * continue to prompt for limits and display answers until the user enters an
 * upper limit that is equal to or less than the lower limit.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int index = 0;
    int limit = 0;
    int square = 0;
    int sum = 0;
    int start = 0;

    printf("\nEnter a pair of integers to represent a range of numbers: ");
    scanf("%d %d", &index, &limit);

    while (limit > index)
    {
        for (start = index; start <= limit; start++)
        {
            square = (start * start);
            sum += square;
        }

        printf("\nThe sum of squares from %d to %d is %d.\n",
               (index * index), (limit * limit), sum);

        printf("\nEnter the next set of limits: ");
        scanf("%d %d", &index, &limit);

        sum = 0;
    }

    printf("\nGoodbye!\n\n");

    return 0;
}
