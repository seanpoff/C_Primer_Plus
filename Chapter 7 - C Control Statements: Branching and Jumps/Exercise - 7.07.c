/* Write a program that requests the hours worked in a week and then
 * prints the gross pay, the taxes, and the net pay. Assume the following:
 * a. Basic pay rate = $10.00/hr
 * b. Overtime (in excess of 40 hours) = time and a half
 * c. Tax rate: 15% of the first $300
 *              20% of the next $150
 *              25% of the rest
 * Use #define constants */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define BASEPAY         (10)
#define BASEHRS         (40)
#define OT_RATE         (1.5)

// tax brackets
#define BRACKET_1       (300)
#define BRACKET_2       (150)

// tax rates
#define TAX_RATE_1      (0.15)
#define TAX_RATE_2      (0.20)
#define TAX_RATE_3      (0.25)

/*******************************************************************************
 * Protoype Functions
 */

// get gross income
float income(int hours);

// get tax withholding
float tax(float gross);

/*******************************************************************************
 * Global Variables
 */

float taxes = 0;
float hours = 0;
float gross = 0;

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int valid = 0;
    int status = 1;

    float net = 0;

    while (1 == status)
    {
        status = 0;

        printf("Enter the hours you worked for the week. ");
        valid = scanf("%f", &hours);

        if (1 != valid)
        {
            printf("\nPlease enter a valid number.\n\n");
            while ('\n' != (getchar()));
            status = 1;
        }
        else
        {
            income(hours);

            tax(gross);

            net = (gross - taxes);

            printf("\nTotal Gross Pay     Total Tax Withholding     Total Net "
                "Pay\n");
            printf("%10.2f %22.2f %22.2f\n\n", gross, taxes, net);
        }
    }

    return 0;
}

/*******************************************************************************
 * Functions
 */

float income(int hours)
{
    if (40 >= hours)
    {
        gross = (hours * BASEPAY);
    }
    else
    {
        gross = ((BASEHRS * BASEPAY) + (((hours - BASEHRS)
            * BASEPAY) * OT_RATE));
    }

    return gross;
}

float tax(float gross)
{            
    if (BRACKET_1 >= gross)
    {
        taxes = (gross * TAX_RATE_1);
    }
    else if ((BRACKET_1 + BRACKET_2) >= gross)
    {
        taxes = ((BRACKET_1 * TAX_RATE_1) + ((gross - BRACKET_1) * TAX_RATE_2));
    }
    else
    {
        taxes = ((BRACKET_1 * TAX_RATE_1) + (BRACKET_2 * TAX_RATE_2) +
                (((gross - BRACKET_1) - BRACKET_2) * TAX_RATE_3));
    }

    return taxes;
}
