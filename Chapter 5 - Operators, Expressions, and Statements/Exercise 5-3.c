/* Write a program that asks the user to enter the number of days and then
 * converts that value to weeks and days. For example, it would convert 18 days
 * to 2 weeks, 4 days. Display results in the following format:
 * 
 * 18 days are 2 weeks, 4 days.
 * 
 * Use a while loop to allow the user to repeatedly enter day values; terminate
 * the loop when the user enters a nonpositive value, such as 0 or -20;
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define CONV        (7)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int weeks = 0;
    int days_in = 0;
    int days_out = 0;

    printf("\nEnter the number of days: ");
    scanf("%d", &days_in);

    while (0 < days_in)
    {
        weeks = (days_in / CONV);
        days_out = (days_in % CONV);

        printf("\n%d days are %d weeks, %d days.\n", days_in, weeks, days_out);

        printf("\nEnter another number of days or '0' to quit: ");
        scanf("%d", &days_in);
    }

    return 0;
}
