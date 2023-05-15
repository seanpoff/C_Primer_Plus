/* Using if else statments, write a program that reads input up to #, 
 * replaces each period with an exclamation mark, replaces each 
 * exclamation mark initially present with two exclamation marks,
 * and reports at the end the number of substitutions it has made.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char ch = 'a';

    int psub = 0;
    int esub = 0;

    printf("\nEnter some text for me to analyze ('#' to quit).\n\n");

    while ('#' != (ch = getchar()))
    {
        if ('.' == ch)
        {
            putchar('!');
            psub++;
        }
        else if ('!' == ch)
        {
            putchar('!');
            putchar('!');
            esub++;
        }
        else
        {
            putchar(ch);
        }
    }

    printf("\nDone! Total substitutions made: %d\n\n"
           "Exclamation marks changed:      %d\n"
           "Periods changed:                %d\n\n", (esub + psub), esub, psub);

    return 0;
}
