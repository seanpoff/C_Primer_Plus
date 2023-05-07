/* minutes.c takes input value of minutes and converts to 
 * total hours and minutes
 */
#include <stdio.h>

int main(void)
{
    // initialize constant and variables
    const int MIN = 60;

    int min_in = 0;
    int min_out = 0;
    int hours = 0;

    // display program details and prompt for user input
    printf("\nThis program converts minutes to hours and minutes.\n");
    printf("Enter the number of minutes. ");
    scanf("%d", &min_in);

    // create loop to allow multiple entries
    // loop ends with input '0'
    while (min_in > 0)
    {       
        // convert minutes to hours and minutes
        hours = (min_in / MIN);
        min_out = (min_in % MIN);

        // display results
        printf("\n%d minutes is %d hours and %d minutes.\n\n",
            min_in, hours, min_out);
        
        // allow for additional input or '0' to quit
        printf("Enter the next number value ('0' to quit). ");  
        scanf("%d", &min_in);    
    }
    
    printf("Goodbye!\n\n");

    return 0;
}
