/* In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8
 * ounces, an ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a
 * program that requests a volume in cups and that displays the equivalent
 * volumes in pints, ounces, tablespoons, and teaspoons. Why does a floating-
 * point type make more sense for this application than an integer type?
 * 
 * Answer: The conversion process requires carrying over decimal values that
 *         get truncated, or rounded to zero, when using integer types.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define CUPS_IN_PINTS       (2)
#define OZ_IN_CUPS          (8)
#define TBS_IN_OZ           (2)
#define TSP_IN_TBS          (3)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    float pints = 0;
    float cups = 0;
    float ozs = 0;
    float tbs = 0;
    float tsp = 0;

    printf("\nEnter the number of cups of water: ");
    scanf("%f", &cups);

    pints = (cups * CUPS_IN_PINTS);
    ozs = (cups / OZ_IN_CUPS);
    tbs = (ozs / TBS_IN_OZ);
    tsp = (tbs / TSP_IN_TBS);

    printf("\n%.2f cups is approximately equal to:\n", cups);
    printf("Pints:       %.2f\n"
           "Ounces:      %.2f\n"
           "Tablespoons: %.2f\n"
           "Teaspoons:   %.2f\n\n", pints, ozs, tbs, tsp);

    return 0;
}
