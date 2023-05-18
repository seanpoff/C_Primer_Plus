/* Many studies suggest that smiling has benefits. Write a program that
 * produces the following output:
 *
 * Smile!Smile!Smile!
 * Smile!Smile!
 * Smile!
 * 
 * Have the program define a function that displays the string Smile! once, and
 * have the program use the function as often as needed.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Prototypes
 */

void smile(void);

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\n");
    smile();
    smile();
    smile();
    printf("\n");

    smile();
    smile();
    printf("\n");

    smile();
    printf("\n\n");

    return 0;
}

/*******************************************************************************
 * Functions
 */

void smile(void)
{
    printf("Smile!");
}
