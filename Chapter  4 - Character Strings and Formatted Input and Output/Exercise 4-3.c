/* Write a program that reads in a floating-point number and prints it first
 * in decimal-point notation and then in exponential notation. Have the output
 * use the following formats (the number of digits shown in the exponent may be
 * different for your system):
 *      The input is 21.3 or 2.1e+001.
 *      The input is +21.290 or 2.12E+001
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    float num = 0;

    printf("\nEnter a number with a decimal value: ");
    scanf("%f", &num);

    printf("\nThe input is %.1f or %.1e.\n", num, num);
    printf("The input is %+.3f or %.2E.\n\n", num, num);

    return 0;
}
