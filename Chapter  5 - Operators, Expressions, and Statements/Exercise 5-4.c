/* Write a program that asks the user to enter a height in centimeters and then
 * displays the height in centimeters and in feet and inches. Fractional
 * centimeters and inches should be allowed, and the program should allow the
 * user to continue entering heights until a nonpositive value is entered.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define CM_IN_INCH          (2.54)
#define INCH_IN_FEET        (12)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    float cm = 0;
    float in_conv = 0;
    float ft_conv = 0;
    float inches = 0;
    float feet_dec = 0;

    int feet = 0;

    printf("\nEnter a height in centimeters: ");
    scanf("%f", &cm);

    while (0 < cm)
    {
        in_conv = (cm / CM_IN_INCH);
        ft_conv = (in_conv / INCH_IN_FEET);

        // need just the integer value
        feet = (int)ft_conv;

        // need just the decimal value
        feet_dec = (ft_conv - feet);

        inches = (feet_dec * INCH_IN_FEET);
        
        printf("\n%.2fcm is about %dft, %.1fin\n", cm, feet, inches);

        printf("\nEnter another height in centimeters ('0' to quit): ");
        scanf("%f", &cm);
    }

    printf("\nGoodbye!\n\n");

    return 0;
}
