/* Write a program that displays the results of applying the modulus operation.
 * The user should first enter an integer to be used as the second operand,
 * which will then remain unchanged. Then the user enters the number for which
 * the modulus will be computed, terminating the process by entering 0 or less.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int div = 0;
    int remain = 0;
    int dividend = 0;

    printf("\nEnter a number to be the dividend in a modulo operation: ");
    scanf("%d", &div);

    printf("\nEnter a number to be used as the dividend: ");
    scanf("%d", &dividend);

    while (0 < dividend)
    {
        remain = (dividend % div);

        printf("\nThe modulo, or remainder of %d and %d is %d.\n",
               dividend, div, remain);

        printf("\nEnter another number to be used as the dividend "
               "('0' to quit): ");
        scanf("%d", &dividend);
    }

    printf("\nGoodbye!\n\n");

    return 0;
}
