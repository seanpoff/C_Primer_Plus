/* plus_ten.c takes an integer provided by a user and prints
 * it along with the next ten numbers.
 */
#include <stdio.h>

int main(void)
{
    // initialize variable (assign value of '1' to set while loop to TRUE)
    int num = 1;

    // prompt for user input
    printf("Enter a whole number and I'll print it along with the next "
        "ten numbers. ");
    scanf("%d", &num);
    
    // create loop to allow for multiple entries
    while (num != 0)
    {
        // declare and initialize limit variable
        // used to limit the next loop sequence
        int limit = (num + 11);
    
        printf("\nHere are your numbers:\n");

        // create a loop to display the eleven numbers
        while (num < limit)
        {
            // display numbers
            printf("%d\n", num);
            num++;
        }

        // prompt for additional entry
        // allow '0' value to quit program
        printf("\nEnter another number to try ('0' to quit). ");
        scanf("%d", &num);
    }

    printf("\nGoodbye!\n\n");

    return 0;
}
