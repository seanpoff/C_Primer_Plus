/* Write a program that requests a type double number and prints the value of
 * the number cubed. Use a function of your own design to cube the value and
 * print it. The main() program should pass the entered value to this function.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Prototypes
 */

double cube(double a);

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    double num = 0;
    double answer = 0;

    printf("\nEnter a number to be cubed: ");
    scanf("%lf", &num);

    answer = cube(num);

    printf("\n%.2lf is approximately %.2lf cubed.\n\n", num, answer);

    return 0;
}

/*******************************************************************************
 * Function cube
 */

double cube(double a)
{
    double res = 0;

    res = (a * a * a);

    return res;
}
