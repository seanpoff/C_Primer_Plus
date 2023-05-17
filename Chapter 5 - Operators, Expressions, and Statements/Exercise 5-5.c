/* Change the program addemup.c (Listing 5.13) [Listing 5-13.c], which found the 
 * sum of the first 20 integers. Modify the program so that you can tell it 
 * interactively how far the calculation should proceed. That is, replace the 20 
 * with a variable that is read in.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int sum = 0;
    int count = 0;
    int limit = 0;

    printf("\nHow many iterations should the calculation complete? ");
    scanf("%d", &limit);

    while (limit > count++)
    {
        sum += count;
    }

    printf("\nsum = %d\n\n", sum);

    return 0;
}
