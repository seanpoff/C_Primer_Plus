/* Redo exercise 4 using a switch */
#include <stdio.h>

int main(void)
{
    //initialize variables
    char ch = 'a';

    int e_sub = 0;
    int p_sub = 0;

    // prompt for user input
    printf("Enter some text for me to analyze ('#' to quit).\n\n");

    // while input is not '#'
    while ((ch = getchar()) != '#') {

        switch (ch)
        {
            // replace periods with exclamation marks
            case '.' :
                p_sub++;
                putchar('!');
            break;
            
            // print two exclamation marks for each intial exclamation mark
            case '!' :
                e_sub++;
                printf("!!");
            break;
            
            // print the rest of the original input
            default :
                putchar(ch);
            break;
        }
    }

    // display number of substitutions made
    printf("\n\nI made a total of %d substitutions.\n", (p_sub + e_sub));
    printf("Exclamation marks: %d\n", e_sub);
    printf("Periods: %d\n", p_sub);

    printf("\nThanks for playing!\n\n");

    return 0;
}
