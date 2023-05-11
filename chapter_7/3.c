/* "Write a program that reads integers until 0 is entered.
 * After input terminates, the program should report the total number of
 * even integers (excluding the 0) entered, the average value of the
 * even integers, the total number of odd integers entered, and the
 * average value of the odd integeres." */
#include <stdio.h>

int main(void)
{
    // initialize variables
    int num = 0;
    int o_sum = 0;
    int e_sum = 0;
    int o_count = 0;
    int e_count = 0;

    // prompt for user input
    printf("Enter a list of integers for me to analyze ('0' to quit).\n");

    // while value is entered but not 0
    while (((scanf("%d", &num)) == 1) && (num != 0)) {
        
        // increase count for even numbers
        if ((num % 2) == 0) {
            e_count++;
            e_sum += num;
        
        // increase count for odd numbers
        } else {
            o_count++;
            o_sum += num;
        }
    }

    // if both types are present, display results
    if (o_count && e_count) {
        printf("\nNumber of evens: %5d\n       Avg even: %5.1f\n"
            " Number of odds: %5d\n        Avg odd: %5.1f\n", 
            e_count, (float)(e_sum / e_count), o_count, 
            (float)(o_sum / o_count));

    // if only evens present, display results
    } else if (!o_count) {
        printf("\nNumber of evens: %5d\n"
            "    \tAverage: %5.1f -- No odd values.\n",
            e_count, (float)(e_sum / e_count));

    // if only odds present, display results
    } else {
        printf("\nNumber of odds: %5d\n"
            "       Average: %5.1f -- No even values.\n",
            o_count, (float)(o_sum / o_count));
    }

    return 0;
}
