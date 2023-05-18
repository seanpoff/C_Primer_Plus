/* Write a program that requests your height in inches and your name, and then
 * displays the information in the following form:
 *
 *      Dabney, you are 6.208 feet tall
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char name[40] = "\0";

    float height = 0;

    printf("\nEnter your height in inches: ");
    scanf("%f", &height);

    printf("\nEnter your name: ");
    scanf("%s", name);

    printf("\n%s, you are %.3f feet tall!\n\n", name, (height / 12));

    return 0;
}
