/* Modify exercise 6-8.c so that it uses a function to return the value of the
 * calculation
 */
#include <stdio.h>

/*******************************************************************************
 * Function Prototype
 */

double result(double a, double b);

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
        res = result(x,y);        

        printf("\n(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n", x, y, x, y, res);

        printf("\nEnter the next pair of numbers ('q' to quit): ");
    }

    return 0;
}

/*******************************************************************************
 * Function result
 */

double result(double a, double b)
{
    double prod = 0;

    prod = ((a - b) / (a * b));

    return prod;
}
