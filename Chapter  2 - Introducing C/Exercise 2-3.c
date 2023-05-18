/* Write a program that converts your age in years to days and displays both
 * values. At this point, don't worry about fractional years and leap years.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int CONV = (365);

    int years = 0;
    int days = 0;

    printf("Enter your age in years: ");
    scanf("%d", &years);

    days = (years * CONV);

    printf("\n%d years old is %d days old!\n\n", years, days);

    return 0;
}
