/* Write a program that reads input until encountering #. Have the program
 * print each input character and its ASCII decimal code. Print eight
 * character-code pairs per line. Suggestion: Use a character count and the
 * modulus operator (%) to print a newline character for every eight cycles
 * of the loop.
 */
#include <stdio.h>
#include <ctype.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int WIDTH = 8;

    char ch = 'a';

    int count = 0;

    printf("Enter some text for me to analyze ('#' to quit).\n\n");

    while ('#' != (ch = getchar()))
    {
        if ('\n' == ch)
        {
            count = 0;
        }

        if (isalpha(ch))
        {
            count++;

            printf("%3c -- %3d, ", ch, ch);
        }

        if (WIDTH == count)
        {
            count = 0;
            printf("\n");
        }
    }

    return 0;
}
