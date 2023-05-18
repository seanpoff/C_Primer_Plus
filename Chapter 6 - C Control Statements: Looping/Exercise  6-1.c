/* Write a program that creates an array with 26 elements and stores the 26
 * lowercase letters in it. Also have it show the array contents.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define SIZE        (26)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char lower[SIZE];

    int i = 0;

    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        lower[i] = ('a' + i);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%c", lower[i]);
    }

    printf("\n\n");

    return 0;
}
