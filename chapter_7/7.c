/* Write a program that requests the hours worked in a week and then 
 * prints the gross pay, the taxes, and the net pay. Assume the following:
 * a. Basic pay rate = $10.00/hr
 * b. Overtime (in excess of 40 hours) = time and a half
 * c. Tax rate: 15% of the first $300
 *              20% of the next $150
 *              25% of the rest
 * Use #define constants */
#include <stdio.h>

// declare constants #define method
#define BASEPAY 10
#define BASEHRS 40
#define OT_RATE 1.5
#define BRACKET_1 300
#define BRACKET_2 150
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25

int main(void)
{
    // initialize variables
    int value = 0;

    float taxes = 0;
    float hours = 0;
    float gross = 0;
    float net = 0;

    // prompt for user input
    printf("Enter the hours you worked for the week. ");
    value = scanf("%f", &hours);

    // ensure only numbers are entered
    if (1 == value) {

        // determine gross pay with and without overtime
        if (40 < hours) {
            gross = ((BASEHRS * BASEPAY) + (((hours - BASEHRS) 
                * BASEPAY) * OT_RATE));
        } else {
            gross = (hours * BASEPAY);
        }

        // determine total tax withholdings
        if (BRACKET_1 >= gross) {
            taxes = (gross * TAX_RATE_1);
        } else if ((BRACKET_1 + BRACKET_2) >= gross) {
            taxes = ((BRACKET_1 * TAX_RATE_1) + ((gross - BRACKET_1) 
                * TAX_RATE_2));
        } else {
            taxes = ((BRACKET_1 * TAX_RATE_1) + (BRACKET_2 * TAX_RATE_2) + 
                (((gross - BRACKET_1) - BRACKET_2) * TAX_RATE_3));
        }

        // net pay
        net = (gross - taxes);

        // display results
        printf("\nTotal Gross Pay     Total Tax Withholding     Total Net "
            "Pay\n");
        printf("%10.2f %22.2f %22.2f\n\n", gross, taxes, net);
        
    } else {
        printf("That was an invalid entry.\n");
    }

    return 0;
}
