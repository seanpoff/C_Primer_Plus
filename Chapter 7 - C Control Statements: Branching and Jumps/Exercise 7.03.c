/* Write a program that reads integers until 0 is entered. After input
 * terminates, the program should report the total number of even integers
 * (excluding the 0) entered, the average value of the even integers, the
 * total number of odd integers entered, and the average value of the odd
 * integers.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int num = 0;
    int o_cnt = 0;
    int e_cnt = 0;

    float e_sum = 0;
    float o_sum = 0;

    printf("Enter positive integers for me to analyze ('0' to quit).\n\n");

    while ((1 == (scanf("%d", &num))) && (0 != num))
    {
        if (0 == (num % 2))
        {
            e_cnt++;
            e_sum += num;
        }
        else
        {
            o_cnt++;
            o_sum += num;
        }
    }

    if (e_cnt && o_cnt)
    {
        printf("\nHere is your analysis:\n"
            "***************************************************************\n"
            "Total Even Numbers: %5d\n"
            "Average Even Value: %5.1f\n"
            "\n"
            "Total Odd Numbers:  %5d\n"
            "Average Odd Value:  %5.1f\n", e_cnt, (e_sum / e_cnt),
            o_cnt, (o_sum / o_cnt));
    }
    else if (e_cnt)
    {
        printf("\nHere is your analysis:\n"
            "***************************************************************\n"
            "Total Even Numbers: %5d\n"
            "Average Even Value: %5.1f\n"
            "\n"
            "No Odd Numbers to Evaluate.\n", e_cnt, (e_sum / e_cnt));
    }
    else if (o_cnt)
    {
        printf("\nHere is your analysis:\n"
            "***************************************************************\n"
            "Total Odd Numbers:  %5d\n"
            "Average Odd Value:  %5.1f\n"
            "\n"
            "No Even Numbers to Evaluate.\n", o_cnt, (o_sum / o_cnt));
    }
    else
    {
        printf("No valid data enterered.\n");
    }

    printf("\nDone!\n\n");

    return 0;
}
