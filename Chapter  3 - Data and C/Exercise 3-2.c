/* Write a program that asks you to enter an ASCII code value, such as 66, and
 * then prints the character having that ASCII code.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int code = 0;

    printf("\nEnter an ASCII decimal code value to get its character: ");
    scanf("%d", &code);

    printf("\nASCII Decimal Code: %d\n", code);
    printf("ASCII Character: %c\n\n", code);

    return 0;
}
