/* Write a program that produces the following output:
 *
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * Which nobody can deny!
 * 
 * Have the program use two user-defined functions in addition to main(): one
 * named jolly() that prints the "jolly good" message once, and one named
 * deny() that prints the final line once.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Prototypes
 */

void jolly(void);
void deny(void);

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\n");

    jolly();
    jolly();
    jolly();

    deny();

    return 0;
}

/*******************************************************************************
 * Functions
 */

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");

    return 0;
}

void deny(void)
{
    printf("Which nobody can deny!\n\n");

    return 0;
}
