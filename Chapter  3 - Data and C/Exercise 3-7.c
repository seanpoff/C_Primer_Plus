/* There are 2.54 centimeters to the inch. Write a program that asks you to
 * enter your height in inches and then displays your height in centimeters.
 * Or, if you prefer, ask for the height in centimeters and convert that to
 * inches.
 */
#include <stdio.h>

/*******************************************************************************
 * Funcion Main
 */

int main(void)
{
    const float CONV = (2.54);

    int cm = 0;
    int ft = 0;
    int inch = 0;
    int inches = 0;

    printf("\nEnter your height in feet and inches. Be sure to follow this "
           "format: 5 10 for 5ft 10in tall.\n\n");
    scanf("%d %d", &ft, &inch);

    inches = ((ft * 12) + inch);
    cm = (inches * CONV);

    printf("\n%dft %din is approximately %dcm tall!\n\n", ft, inch, cm);

    return 0;
}
