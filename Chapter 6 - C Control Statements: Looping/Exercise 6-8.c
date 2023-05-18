/* Write a program that requests two floating-point numbers and prints the value
 * of their difference divided by their product. Have the program loop through
 * pairs of input values until the user enteres nonnumeric input.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    double x = 0;
    double y = 0;
    double res = 0;

    printf("\nEnter a pair of numbers: ");

    while (2 == (scanf("%lf %lf", &x, &y)))
    {
        res = ((x - y) / (x * y));

        printf("\n(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n", x, y, x, y, res);

        printf("\nEnter the next pair of numbers ('q' to quit): ");
    }

    return 0;
}
