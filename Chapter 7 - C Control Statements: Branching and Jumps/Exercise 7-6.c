/* Write a program that reads input up to # and reports the number of times
 * that the sequence ei occurs.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char ch = 'b';
    char prev = 'a';

    int count = 0;

    printf("Enter some text and I'll analyze it ('#' to quit).\n\n");

    while ((ch = (getchar())) && ('#' != ch))
    {
        if (('e' == prev) && ('i' == ch))
        {
            count++;
        }

        prev = ch;
    }

    printf("The sequence 'ei' occured %d times.\n\n", count);

    return 0;
}
