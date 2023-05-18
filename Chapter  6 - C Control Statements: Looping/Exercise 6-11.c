/* Write a program that reads eight integers into an array and then prints them
 * in reverse order.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int SIZE = 8;

    char ints[SIZE];

    int start = 0;
    int end = 0;
    int num = 0;

    printf("Enter %d integers for me to store and reverse:\n", SIZE);

    for (start = 0; start < SIZE; start++)
    {
        scanf("%d", &ints[start]);
    }

    printf("\nHere are the numbers you've entered in reverse order:\n");

    for (end = (SIZE - 1); end >= 0; end--)
    {
        printf("%d", ints[end]);
    }

    printf("\n\nGoodbye!\n\n");

    return 0;
}
