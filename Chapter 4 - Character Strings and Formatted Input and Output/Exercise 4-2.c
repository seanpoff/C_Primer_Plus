/* Write a program that requests your first name and does the following with it:
 *      Prints it enclosed in double quotation marks
 *      Prints it in a field 20 characters wide, with the whole field in quotes
 *          and the name at the right end of the field
 *      Prints it at the left end of a field 20 characters wide, with the whole
 *          field enclosed in quotes
 *      Prints it in a field three characters wider than the name
 */
#include <stdio.h>
#include <string.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char name[20] = "\0";

    int width = 0;

    printf("\nEnter your first name: ");
    scanf("%s", name);

    printf("\n\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);

    width = ((strlen(name)) + 3);

    printf("%*s\n\n", width, name);

    return 0;
}
