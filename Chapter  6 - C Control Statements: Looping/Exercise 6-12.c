/* Consider these two infinite series:
 *
 *      1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
 *      1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
 * 
 * Write a program that evaluates running totals of these two series up to some
 * limit of number of terms. Hint: -1 times itself an odd number of times is -1,
 * and -1 times itself an even number of times is 1. Have the user enter the
 * limit interactively; let a zero or negative value terminate input. Look at
 * the running totals after 100 terms, 1,000 terms, 10,000 terms. Does either
 * series appear to be converging to some value?
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    double i = 0;
    double sum1 = 0;
    double sum2 = 0;

    int end = 0;
    int sign = 1;

    printf("Enter the number of terms to evaluate: ");
    scanf("%d", &end);

    while (0 < end)
    {
        for (i = 1; i <= end; i++)
        {
            sum1 += (1 / i);
            sum2 += ((1 / i) * sign);
            sign = ((-1) * sign); 
        }

        printf("\n1 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... 1/%d.0 = %lf\n",
               end, sum1);

        printf("1 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... 1/%d.0 = %lf\n",
               end, sum2);

        sum1 = 0;
        sum2 = 0;
        sign = 1;

        printf("\nEnter another value ('0' to quit): ");
        scanf("%d", &end);
    }

    printf("\nGoodbye!\n\n");

	return 0;
}
