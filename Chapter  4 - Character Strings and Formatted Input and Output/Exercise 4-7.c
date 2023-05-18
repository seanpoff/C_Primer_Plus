/* Write a program that sets a type double variable to 1.0/3.0 and a type float
 * variable to 1.0/3.0. Display each result three times – once showing four
 * digits to the right of the decimal, once showing 12 digits to the right of
 * the decimal, and once showing 16 digits to the right of the decimal. Also
 * have the program include float.h and display the values of FLT_DIG and
 * DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?
 */
#include <stdio.h>
#include <float.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    double d = (1.0/3.0);

    float f = (1.0/3.0);

    printf("\nValue of (1 / 3) represented as a double type value:\n");
    printf("%.4lf, %.12lf, %.16lf\n", d, d, d);

    printf("\nValue of (1 / 3) represented as a float type value:\n");
    printf("%.4f, %.12f, %.16f\n", f, f, f);

    printf("\nThe minimum number of significant decimal digits for a double "
           "is: %d\n", DBL_DIG);

    printf("The minimum number of significant decimal digits for a float is: "
           "%d\n\n", FLT_DIG);

    return 0;
}
