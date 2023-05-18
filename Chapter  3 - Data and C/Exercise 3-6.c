/* The mass of a single molecule of water is about 3.0x10 ^ -23 grams. A quart
 * of water is about 950 grams. Write a program that requests an amount of
 * water, in quarts, and displays the number of water molecules in that amount.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const float WATER = (3.0e-23);
    const float QUART = (950);

    float value = 0;
    float molecule = 0;

    printf("\nEnter a number of quarts of water: ");
    scanf("%f", &value);

    molecule = ((QUART * value) / WATER);

    printf("%.2f quarts of water contains about %e water molecules.\n\n",
           value, molecule);

    return 0;
}
