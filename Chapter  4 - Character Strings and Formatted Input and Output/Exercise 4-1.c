/* Write a program that asks for your first name, your last name, and then
 * prints the names in the format last, first.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char first[40] = "\0";
    char last[40] = "\0";

    printf("\nEnter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);

    printf("\n%s, %s\n\n", last, first);

    return 0;
}
