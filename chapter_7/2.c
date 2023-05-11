/* "Write a program that reads input until encountering #. 
 * Have the program print each input character and its'
 * ASCII decimal code. Print eight character-code pairs per line. */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // initialize variables
    const int WIDTH = 8;    

    char ch = 'a';

    int c_cnt = 0;

    // prompt user for input
    printf("Enter some text for me to analyze ('#' to quit):\n");

    // while char input is not '#'
    while ((ch = getchar()) != '#') {
        
        // count only alphabetical characters (no white-space)
        if (isalpha(ch)) {
            c_cnt++;

            // display original character and its' ASCII decimal counterpart
            printf("%3c -- %3d, ", ch, ch);

            // limit each row to 8 pairings
            if ((c_cnt % WIDTH) == 0) {
            printf("\n");
            }
        } 
    }

    printf("Thanks for playing!\n");
    
    return 0;
}
