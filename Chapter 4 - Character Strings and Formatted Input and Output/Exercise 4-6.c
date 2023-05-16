/* Write a program that requests the user’s first name and then the user’s last
 * name. Have it print the entered names on one line and the number of letters
 * in each name on the following line. Align each letter count with the end of
 * the corresponding name, as in the following:
 *
 *      Melissa Honeybee
 *            7        8
 *
 * Next have it print the same information, but with the counts aligned with
 * the beginning of each name.
 *
 *      Melissa Honeybee
 *  	7	    8
 */
#include <stdio.h>
#include <string.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char fname[40] = "\0";
    char lname[40] = "\0";

    int space = 0;

    printf("\nEnter your first name: ");
    scanf("%s", fname);

    printf("Enter your last name: ");
    scanf("%s", lname);

    space = (strlen(fname) + 1);

    printf("\n%s %s\n", fname, lname);
    printf("%zd%*zd\n\n", (strlen(fname)), space,(strlen(lname)));

    return 0;
}
