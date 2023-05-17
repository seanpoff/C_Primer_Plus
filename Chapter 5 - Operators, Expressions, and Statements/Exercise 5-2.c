/* Write a program that asks for an integer and then prints all the integers
 * from (and including) that value up to (and including) a value larger by 10.
 * (That is, if the input is 5, the output runs from 5 to 15.) Be sure to
 * separate each output value by a space or tab or newline.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    const int RANGE = (10);

    int num = 0;
    int limit = 0;

    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    limit = (num + RANGE);

    printf("\n");

    while (limit >= num)
    {
        printf("%d ", num);
        num++;
    }

    printf("\n\n");

    return 0;
}
