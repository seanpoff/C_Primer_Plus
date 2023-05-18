/* Write a program that creates an integer variable called toes. Have the
 * program set toes to 10. Also have the program calculate what twice toes is
 * and what toes squared is. The program should print all three values,
 * identifying them.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int toes = 10;
    int twice = 0;
    int tsquared = 0;

    twice = (toes * 2);
    tsquared = (toes * toes);

    printf("\nToes: %d\n", toes);
    printf("Twice Toes: %d\n", twice);
    printf("Toes squared: %d\n\n", tsquared);

    return 0;
}
