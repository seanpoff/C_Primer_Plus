/* Write a program that converts time in minutes to time in hours and minutes.
 * Use #define or const to create a symbolic constant for 60. Use a while loop
 * to allow the user to enter values repeatedly and terminate the loop if a
 * value for the time of 0 or less is entered.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define CONV        (60)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int hours = 0;
    int min_in = 0;
    int min_out = 0;

    printf("\nEnter the time in total minutes: ");
    scanf("%d", &min_in);
    
    while (0 < min_in)
    {
        hours = (min_in / CONV);
        min_out = (min_in % CONV);

        printf("\n%d minutes is %d hours and %d minutes.\n", 
            min_in, hours, min_out);

        printf("\nEnter the next number of minutes or '0' to quit: ");
        scanf("%d", &min_in);
    }

    printf("\nGoodbye!\n\n");

    return 0;
}
