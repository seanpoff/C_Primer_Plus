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
 * #Define Constants
 */

// hourly pay rates
#define PAY_1           (8.75)
#define PAY_2           (9.33)
#define PAY_3           (10.00)
#define PAY_4           (11.20)

// max regular hours
#define BASEHRS         (40)

// overtime rate
#define OT_RATE         (1.5)

// tax brackets
#define BRACKET_1       (300)
#define BRACKET_2       (150)

// tax rates
#define TAX_RATE_1      (0.15)
#define TAX_RATE_2      (0.20)
#define TAX_RATE_3      (0.25)

/*******************************************************************************
 * Prototype Functions
 */

float otgross(int hours);
float taxes1(float gross);
float taxes2(float gross);
float taxes3(float gross);

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
    // initialize variables
    int quit = 0;
    int valid = 0;
    int value = 0;
    int status = 1;
    int choice = 0;

    float net = 0;

    while (1 == status)
    {
        printf("\n*********************************************************\n"
               "Enter the number corresponding to the pay rate or action:\n"
               "1) $8.75/hr                          2) $9.33/hr\n"
               "3) $10.00/hr                         4) $11.20/hr\n"
               "5) quit\n"
               "*********************************************************\n\n");

        status = scanf("%d", &choice);
        
        // if non numerical data entry
        if (1 != status)
        {
            printf("\nInvalid input. Please try again.\n\n");
            value = 0;
            break;
        }
        else
        {
            switch (choice)
            {
                case 1 :
                    baserate = PAY_1;
                    status = 0;
                    value = 1;
                break;

                case 2 :
                    baserate = PAY_2;
                    status = 0;
                    value = 1;
                break;

                case 3 :
                    baserate = PAY_3;
                    status = 0;
                    value = 1;
                break;

                case 4 :
                    baserate = PAY_4;
                    status = 0;
                    value = 1;
                break;

                case 5 :
                    status = 0;
                    value = 0;
                    quit = 1;
                    printf("\nGoodbye!\n\n");
                break;

                default :
                    printf("\nPlease select a valid option.\n");
            }
        }
    }

    if (1 == quit || 0 == value)
    {
        // terminates program
    }
    else
    {
        printf("\nEnter the number of hours worked.\n\n");

        valid = scanf("%f", &hours);

        if (0 == valid)
        {
            printf("\nInvalid input, please try again.\n\n");
        }
        else
        {
            if (40 >= hours)
            {
                gross = (hours * baserate);
            }
            else
            {
                otgross(hours);
            }

            if (BRACKET_1 >= gross)
            {
                taxes1(gross);
            }
            else if ((BRACKET_1 + BRACKET_2) >= gross)
            {
                taxes2(gross);
            }
            else
            {
                taxes3(gross);
            }

            net = (gross - taxes);

            printf("\nTotal Gross Pay     Total Tax Withholding     Total Net "
                   "Pay\n");

            printf("%10.2f %22.2f %22.2f\n\n", gross, taxes, net);
        }
    }

    return 0;
}

/*******************************************************************************
 * Functions Gross & Taxes
 */

float otgross(int hours)
{
    gross = ((BASEHRS * baserate) + (((hours - BASEHRS) * baserate) * OT_RATE));

    return gross;
}

float taxes1(float gross)
{
    taxes = (gross * TAX_RATE_1);

    return taxes;
}

float taxes2(float gross)
{
    taxes = ((BRACKET_1 * TAX_RATE_1) + ((gross - BRACKET_1) * TAX_RATE_2));

    return taxes;
}

float taxes3(float gross)
{
    taxes = ((BRACKET_1 * TAX_RATE_1) + (BRACKET_2 * TAX_RATE_2) +
                    (((gross - BRACKET_1) - BRACKET_2) * TAX_RATE_3));

    return taxes;
}
