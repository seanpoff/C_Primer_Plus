/* Write a program that creates an eight-element array of ints and sets the
 * elements to the first eight powers of 2 and then prints the values. Use a for
 * loop to set the values, and, for variety, use a do while loop to display the
 * values.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int SIZE = 8;

    int nums[SIZE];
    int val = 0;
    int i = 0;

    printf("\n");

    // index[0] starts at 2^1 = 2
    // set value = 1 to get index[0] 2^0 = 1
    val = 2;

    for (i = 0; i < SIZE; i++)
    {
        nums[i] = val;
        val *= 2;
    }

    i = 0;

    do
    {
        printf("%d\n", nums[i]);
        i++;
    } while (i < SIZE);

    printf("\nGoodbye!\n\n");

    return 0;
}
