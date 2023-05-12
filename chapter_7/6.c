/* Write a program that reads input up to # and reports the number of times
 * that the sequence ei occurs. */
#include <stdio.h>

int main(void)
{
    // initialize variables
    char ch = 'b';
    char prev = 'a';

    int count = 0;

    // prompt for user input
    printf("Enter some text for me to analyze ('#' to quit).\n");

    // while input is not #
    while ((ch = getchar()) != '#') {

        // if last character was e and current character is i
        if ('e' == prev && 'i' == ch) count++;
        
        // store value of last character
        prev = ch;
    }

    // display results
    printf("The sequence 'ei' occured %d times.\n", count);
    printf("\nGoodbye!\n");

    return 0;
}
