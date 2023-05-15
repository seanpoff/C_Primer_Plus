/* Modify assumption a. in exercise 7 so that the program presents a menu of
 * pay rates from which to choose. Use a switch to select the pay rate.
 * The beginning of a run should look something like this:
 * *****************************************************************
 * Enter the number corresponding to the desired pay rate or action:
 * 1) $8.75/hr                          2) $9.33/hr
 * 3) $10.00/hr                         4) $11.20/hr
 * 5) quit
 * *****************************************************************
 * 
 * If choices 1 through 4 are selected, the program should request the
 * hours worked. The program should recycle until 5 is entered. If something
 * other than choice 1 through 5 is entered, the program should remind the user
 * what the proper choices are and then recycle. Use #define constants for
 * the various earning rates and tax rates. */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

// hourly payrates
#define PAY_1 8.75
#define PAY_2 9.33
#define PAY_3 10.00
#define PAY_4 11.20

// max regular hours
#define BASEHRS 40

// overtime rate
#define OT_RATE 1.5

// tax brackets
#define BRACKET_1 300
#define BRACKET_2 150

// tax rates
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25

/*******************************************************************************
 * Protoype Functions
 */

// get gross income
float income(int hours);

// get tax withholding
float tax_1(float gross);
float tax_2(float gross);
float tax_3(float gross);

/*******************************************************************************
 * Global Variables
 */

float baserate = 0;
float taxes = 0;
float hours = 0;
float gross = 0;

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    // initialize local variables
    int quit = 0;
    int fail = 0;
    int valid = 0;
    int choice = 0;
    int status = 0;

    float net = 0;

    // start the loop
    status = 1;

    while (1 == status)
    {
        status = 0;

        printf("\nEnter the number corresponding to the pay rate or action:\n"
               "*********************************************************\n"
               "1) $8.75/hr                          2) $9.33/hr\n"
               "3) $10.00/hr                         4) $11.20/hr\n"
               "5) quit\n"
               "*********************************************************\n\n");

        status = scanf("%d", &choice);

        switch (choice)
        {
            case 1 :
                baserate = PAY_1;
            break;

            case 2 :
                baserate = PAY_2;
            break;

            case 3 :
                baserate = PAY_3;
            break;

            case 4 :
                baserate = PAY_4;
            break;

            case 5 :
                quit = 1;
            break;

            default :
                printf("\nThat is not a valid option.\n");
                fail = 1;
        }

        if (1 == quit)
        {
            printf("\nGoodbye!\n\n");
            break;
        }
        else if (1 == fail)
        {
            // reiterate loop
            while ('\n' != (getchar()));
            status = 1;
            fail = 0;
        }
        else
        {
            printf("\nEnter the number of hours worked.\n\n");

            // use valid flag to verify numerical input
            valid = scanf("%f", &hours);

            if (0 == valid) 
            {
                printf("\nInvalid input, please try again.\n");
                while ('\n' != (getchar()));
                status = 1;
            }
            else
            {
                income(hours);

                // determine total tax withholdings
                if (BRACKET_1 >= gross)
                {
                    tax_1(gross);
                }
                else if ((BRACKET_1 + BRACKET_2) >= gross)
                {
                    tax_2(gross);
                }
                else
                {
                    tax_3(gross);
                }

                net = (gross - taxes);

                printf("\nTotal Gross Pay     Total Tax Withholding     "
                       "Total Net Pay\n");

                printf("%10.2f %22.2f %22.2f\n\n", gross, taxes, net);

                // clear all to reiterate loop cleanly
                while ('\n' != (getchar()));
                status = 1;
                fail = 0;
            }
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
        gross = (hours * baserate);
    }
    else 
    {
        gross = ((BASEHRS * baserate) + (((hours - BASEHRS) * baserate)
            * OT_RATE));
    }

    return gross;
}

float tax_1(float gross)
{
    taxes = (gross * TAX_RATE_1);

    return taxes;
}

float tax_2(float gross)
{
    taxes = ((BRACKET_1 * TAX_RATE_1) + ((gross - BRACKET_1) * TAX_RATE_2));

    return taxes;
}

float tax_3(float gross)
{
    taxes = ((BRACKET_1 * TAX_RATE_1) + (BRACKET_2 * TAX_RATE_2) +
        (((gross - BRACKET_1) - BRACKET_2) * TAX_RATE_3));

    return taxes;
}
