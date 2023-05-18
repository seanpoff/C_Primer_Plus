/* Modify exercise 6-8.c so that it uses a function to return the value of the
 * calculation
 */
#include <stdio.h>

/*******************************************************************************
 * Function Prototype
 */

double result(double x, double y);

/*******************************************************************************
 * Global Variables
 */

double x = 0;
double y = 0;
double res = 0;

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\nEnter a pair of numbers: ");

    while (2 == (scanf("%lf %lf", &x, &y)))
    {
        result(x,y);        

        printf("\n(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n", x, y, x, y, res);

        printf("\nEnter the next pair of numbers ('q' to quit): ");
    }

    return 0;
}

/*******************************************************************************
 * Function Result
 */

double result(double x, double y)
{
    res = ((x - y) / (x * y));

    return res;
}
