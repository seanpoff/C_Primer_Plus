/* Write a program that creates two eight-element arrays of doubles and uses a
 * loop to let the user enter values of the eight elements of the first array.
 * Have the program set the elements of the second array to the cumulative
 * totals of the elements of the first array. For example, the fourth element
 * of the second array should equal the sum of the first four elements of the
 * first array. (It's possible to do this with nested loops, but by using the
 * fact that the fifth element of the second array equals the fourth element
 * of the second array plus the fifth element of the first array, you can avoid
 * nesting and just use a single loop for this task.) Finally, use loops to
 * display the contents of the two arrays, with the first array displayed on
 * one line and with each element of the second array displayed below the
 * corresponding element of the first array.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int SIZE = 8;

    int i = 0;

    double user[SIZE];
    double accum[SIZE];

    printf("\nEnter %d numbers to be used in an array.\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%lf", &user[i]);
        accum[i] = accum[i - 1] + user[i];
    }

    printf("\n\nArray_1: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%8g -- ", user[i]);
    }

    printf("\nArray_2: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%8g -- ", accum[i]);
    }

    printf("\n\nGoodbye!\n\n");

    return 0;
}
