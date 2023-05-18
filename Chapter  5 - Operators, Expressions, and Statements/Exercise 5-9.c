/* Write a program that requests the user to enter a Fahrenheit temperature.
 * The program should read the temperature as a type double number and pass it
 * as an argument to a user-supplied function called Temperatures(). This
 * function should calculate the Celsius equivalent and the Kelvin equivalent
 * and display all three temperatures with a precision of two places to the
 * right of the decimal. It should identify each value with the temperature
 * scale it represents. Here is the formula for converting Fahrenheit to
 * Celsius:
 *      Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
 * 
 * The Kelvin scale, commonly used in science, is a scale in which 0 represents
 * absolute zero, the lower limit to possible temperatures. Here is the
 * formula for Celsius to Kelvin:
 *      Kelvin = Celsius + 273.16
 * 
 * The Temperatures() function should use const to create symbolic
 * representations of the three constants that appear in the conversions. The
 * main() function should use a loop to allow the user to enter temperatures
 * repeatedly, stopping when a q or other nonnumeric value is entered. Us the
 * fact that scanf() returns the number of items read, so it will return 1 if it
 * reads a number, but won't return 1 if the user enters q. The == operator
 * tests for equality, so you can use it to compare the return value of scanf()
 * with 1.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define CELSIUS     (5.0 / 9.0)
#define KELVIN      (273.16)

/*******************************************************************************
 * Global Variables
 */

double f = 0;

/*******************************************************************************
 * Function Prototypes
 */

void temperatures(double f);

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\nEnter a temperature in Fahrenheit: ");

    while (1 == (scanf("%lf", &f)))
    {
        temperatures(f);

        printf("\nEnter another temperature in Fahrenheit ('q' to quit): ");
    }

    printf("\nGoodbye!\n\n");

    return 0;
}

/*******************************************************************************
 * Function Temperatures
 */

void temperatures(double f)
{
    const double C = ((CELSIUS) * (f - 32));
    const double K = (C + KELVIN);

    printf("\n%.2lf degrees Fahrenheit is approximately %.2lf degrees Celsius, "
           "and approximately %.2lf degrees Kelvin.\n", f, C, K);
}
