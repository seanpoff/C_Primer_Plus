/* Write a program that reads in a line of input and then prints the line in
 * reverse order. You can store the input in an array of char; assume that the
 * line is no longer than 255 characters. Recall that you can use scanf() with
 * the %c specifier to read a character at a time from input and that the \n
 * character is generated when you press the Enter Key.
 */
#include <stdio.h>
#include <string.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int SIZE = 255;

    char letters[SIZE];

    int i = 0;
    int length = 0;
    int end = 0;

    printf("Enter text to be stored and reversed:\n\n");

    for (i = 0; i < SIZE, letters[i - 1] != '\n'; i++)
    {
        scanf("%c", &letters[i]);
    }

    length = strlen(letters);

    printf("\nYour sentence backwards:\n");

    for (end = length; end >= 0; end--)
    {
        printf("%c", letters[end]);
    }

    printf("\n\nGoodbye!\n\n");

    return 0;
}
