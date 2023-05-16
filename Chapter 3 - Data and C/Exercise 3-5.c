/* There are approximatelyl 3.156 x 10 ^ 7 seconds in a year. Write a program
 * that requests your age in years and then displays the equivalent number of
 * seconds.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const float SEC = (3.156e+7);

    int age = 0;

    float seconds = 0;

    printf("\nEnter your age in years: ");
    scanf("%d", &age);

    seconds = (age * SEC);

    printf("\n%d years old is %e seconds old!\n\n", age, seconds);

    return 0;
}
