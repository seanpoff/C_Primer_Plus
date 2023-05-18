/* Chuckie Lucky won a million dollars (after taxes), which he places in an
 * account that earns 8% a year. On the last day of each year, Chuckie withdraws
 * $100,000. Write a program that finds out how many years it takes for Chuckie
 * to empty his account.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int rem = 100000;
    int years = 0;

    double rate = 0.08;
    double balance = 1000000;

    for ( ; balance > 0; years++)
    {
        balance += ((balance * rate) - rem);
    }

    printf("\nIt took Chuckie %d years to empty his bank account.\n\n", years);

    return 0;
}
