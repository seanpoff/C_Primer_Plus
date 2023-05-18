/* You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies).
 * The company is entering the European market and wants a program that
 * converts inches to centimeters (1 inch = 2.54 cm). The company wants the
 * program set up so that it prompts the user to enter an inch value.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const float CONV = (2.54);

    float cm = 0;
    float inch = 0;

    printf("Enter an inch value to be converted to centimeters: ");
    scanf("%f", &inch);

    cm = (inch * CONV);

    printf("\n%.2f inches is %.2f centimeters.\n\n", inch, cm);

    return 0;
}
