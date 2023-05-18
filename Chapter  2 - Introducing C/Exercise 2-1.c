/* Write a program that uses one printf() call to print your first name and
 * last name on one line, uses a second printf() call to print your first and
 * last names on two separate liens, and uses a pair of printf() calls to print
 * your first and last names on one line. The output should look like this
 * (but using your name):
 * 
 * Gustav Mahler    <- First print statement
 * Gustav           <- Second print statement
 * Mahler           <- Still the second print statement
 * Gustav Mahler    <- Third and fourth print statement
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\nSean Poffenbarger\n");
    printf("Sean\nPoffenbarger\n");
    printf("Sean ");
    printf("Poffenbarger\n\n");

    return 0;
}
