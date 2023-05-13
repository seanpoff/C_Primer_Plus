/* "Write a program that reads input until encountering the #
 * character and then reports the number of spaces read, the number
 * of newline characters read, and the number of all other characters read." */
#include <stdio.h>

int main(void)
{
    // initialize variables
    char ch = 'a';

    int newline = 0;
    int space = 0;
    int other = 0;

    // prompt for user input
    printf("Enter some text for me to analyze. Type '#' to quit.\n");

    // while char input is not '#'
    while ((ch = getchar()) != '#') 
    {
        // count newline characters
        if (ch == '\n') 
        {
            newline++;

        // count spaces
        } 
        else if (ch == ' ') 
        {
            space++;
        
        // count everything else
        } 
        else 
        {
            other++;
        }
    }

    // display results
    printf("New lines = %d, spaces = %d, other characters = %d\n",
        newline, space, other);
    
    return 0;
}
