/* Write a program that reads input until encountering the #
 * character and then reports the number of spaces read, the number
 * of newline characters read, and the number of all other characters read.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char ch = 'a';

    int other = 0;
    int space = 0;
    int newline = 0;

    printf("Enter some text for me to analyze ('#' to quit).\n");

    while('#' != (ch = getchar()))
    {
        if ('\n' == ch)
        {
            newline++;
        }
        else if (' ' == ch)
        {
            space++;
        }
        else
        {
            other++;
        }
    }

    printf("Here are the results:\n\n");
    printf("Spaces:     %d\n"
           "Newlines:   %d\n"
           "All others: %d\n", space, newline, other);

    return 0;
}
