/* Write a program that reads a single word into a character array and then
 * prints the word backward. Hint: Use strenlen() (Chapter 4) to compute the
 * index of the last character in the array.
 */
#include <stdio.h>
#include <string.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    char word[40] = "\0";

    int start = 0;
    int end = 0;

    printf("\nType a word: ");
    scanf("%s", word);

    end = strlen(word);

    printf("\n");

    for (start = end; start >= 0; start--)
    {
        printf("%c", word[start]);
    }

    printf("\n\nGoodbye!\n\n");

    return 0;
}
