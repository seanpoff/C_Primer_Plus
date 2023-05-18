/* Write a program that requests a type double number and prints the value of
 * the number cubed. Use a function of your own design to cube the value and
 * print it. The main() program should pass the entered value to this function.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Prototypes
 */

double cube(double num);

/*******************************************************************************
 * Global Variables
 */

double num = 0;
double product = 0;

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\nEnter a number to be cubed: ");
    scanf("%lf", &num);

    cube(num);

    printf("\n%.2lf is approximately %.2lf cubed.\n\n", num, product);

    return 0;
}

/*******************************************************************************
 * Function Cube
 */

double cube(double num)
{
    product = (num * num * num);

    return product;
}
