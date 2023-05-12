/* Using if else statments, write a program that reads input up to #, 
 * replaces each period with an exclamation mark, replaces each 
 * exclamation mark initially present with two exclamation marks,
 * and reports at the end the number of sustitutions it has made.
 */
#include <stdio.h>

int main(void)
{
    // initialize variables
    char ch = 'a';

    int e_sub = 0;
    int p_sub = 0;

    // prompt for user input
    printf("Enter some text for me to analyze ('#' to quit).\n\n");

    // while input is not '#'
    while ((ch = getchar()) != '#') {

        // replace periods with exclamation marks
        if ('.' == ch) {
            p_sub++;
            putchar('!');

        // print two exclamations marks for each inital exclamation mark
        } else if ('!' == ch) {
            e_sub++;
            printf("!!");

        // print the rest of the original input
        } else { 
            putchar(ch);
        }
    }

    // display number of substitutions made
    printf("\n\nI made a total of %d substitutions.\n", (p_sub + e_sub));
    printf("Exclamation marks: %d\n", e_sub);
    printf("Periods: %d\n", p_sub);

    printf("\nThanks for playing!\n\n");

    return 0;
}
