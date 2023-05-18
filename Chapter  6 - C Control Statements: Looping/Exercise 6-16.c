/* Daphne invests $100 at 10% simple interest. (That is, every year, the
 * investment earns an interest equal to 10% of the original investment.)
 * Deirdre invests $100 at %5 interest compounded annually. (That is, interest
 * of 5% of the current balance, including previous addition of interest.) Write
 * a program that finds how many years it takes for the avlue of Deirdre's
 * investment to exceed the value of DAphne's investment. Also show the two
 * values at that time.
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int years = 0;

    double daphne_dep = 100;

    double daphne_rate = 0.10;
    double deirdre_rate = 0.05;

    double daphne_bal = 100;
    double deirdre_bal = 100;


    for (years = 0; daphne_bal >= deirdre_bal; years++)
    {
        daphne_bal += (daphne_dep * daphne_rate);
        deirdre_bal += (deirdre_bal * deirdre_rate);

        years++;
    }

    printf("\nIt took %d years for Deirdre's balance to surpass Daphne's.\n"
           "These are their balances in the last year:\n\n"
           "Daphne's Balance:  %.2lf\n"
           "Deirdre's Balance: %.2lf\n\n", years, daphne_bal, deirdre_bal);

    printf("Goodbye!\n\n");

    return 0;
}
