/* Write a program that prints a table with each line giving an integer, its
 * square, and its cube. Ask the user to input the lower and upper limits for
 * the table. Use a for loop.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int end = 0;
    int start = 0;
    int square = 0;
    int cube = 0;
    int num = 1;

    printf("\nEnter a starting number: ");
    scanf("%d", &num);

    printf("Now enter an ending number: ");
    scanf("%d", &end);

    printf("\n%5s %10s %12s", "Base:", "Square:", "Cube:");

    for (start = num; start <= end; start++)
    {
        square = (start * start);
        cube = (square * start);

        printf("\n%5d %10d %12d", start, square, cube);
    }

    printf("\n\nGoodbye!\n\n");

    return 0;
}
