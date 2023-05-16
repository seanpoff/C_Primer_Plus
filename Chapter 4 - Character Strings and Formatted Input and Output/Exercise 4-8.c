/* Write a program that asks the user to enter the number of miles traveled and
 * the number of gallons of gasoline consumed. It should then calculate and
 * diplay the miles-per-gallon value, showing one place to the right of the
 * decimal. Next, using the fact that one gallon is about 3.785 liters and one
 * mile is about 1.609 kilometers, it should convert the mile-per-gallon value
 * to a liters-per-100-km value, the usual European way of expressing fuel
 * consumption, and display the result, showing one place to the right of the
 * decimal. Note that the U.S. scheme measure the distance traveled per amount
 * of fuel (higher is better) whereas the European scheme measures the amount
 * of fuel per distance (lower is better). Use symbolic constants (using const
 * or #define) for the two conversion factors.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define L_IN_GAL        (3.785)
#define KM_IN_MI        (1.609)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    float mi = 0;
    float km = 0;
    float mpg = 0;
    float lpk = 0;
    float gal = 0;
    float ltr = 0;

    printf("\nEnter the number of miles traveled: ");
    scanf("%f", &mi);

    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%f", &gal);

    mpg = (mi / gal);

    printf("\nYou were getting about %.1f miles-per-gallon.\n\n", mpg);

    ltr = (gal * L_IN_GAL);
    km = (mi * KM_IN_MI);
    lpk = (ltr / (km / 100));

    printf("This is about the same as %.1f liters-per-100-km.\n\n", lpk);

    return 0;
}
