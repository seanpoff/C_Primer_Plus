/* Summary of the US Tax Schedule (1988):
 *
 * Single                   15% of first $17,850 plus 28% of excess
 * Head of Household        15% of first $23,900 plus 28% of excess
 * Married, Joint           15% of first $29,750 plus 28% of excess
 * Married, Separate        15% of first $14,875 plus 28% of excess
 *
 * Write a program that lets the user specify the tax category and the
 * taxable income and that then calculates the tax. Use a loop so that the
 * user can enter several tax cases.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

// tax brackets based on filing status
#define SINGLE          (17850)
#define HEAD            (23900)
#define JOINT           (29750)
#define INDV            (14875)

// tax rates
#define BASERATE        (0.15)
#define RATE_2          (0.28)

/*******************************************************************************
 * Prototype Functions
 */

float tax_1(float gross);
float tax_2(float gross);

/*******************************************************************************
 * Global Variables
 */

int indv = 0;
int head = 0;
int joint = 0;
int single = 0;
int bracket = 0;

float tax = 0;
float gross = 0;
float basetax = 0;

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int quit = 0;
    int again = 0;
    int value = 0;
    int valid = 0;
    int accept = 0;
    int option = 0;
    int status = 1;

    // set active to start loop
    status = 1;

    while (1 == status)
    {
        // flag for invalid entry after while loop
        valid = 1;

        printf("\n");
        printf("Enter the option that corresponds with your tax category.\n");
        printf("*********************************************************\n"
               "1) Single                       2) Head of Household\n"
               "3) Married, Joint               4) Married, Separate\n"
               "5) quit\n"
               "*********************************************************\n");

        status = scanf("%d", &option);

        switch (option)
        {
            case 1:
                bracket = SINGLE;
                status = 0;
                value = 1;
            break;

            case 2:
                bracket = HEAD;
                status = 0;
                value = 1;
            break;

            case 3:
                bracket = JOINT;
                status = 0;
                value = 1;
            break;

            case 4:
                bracket = INDV;
                status = 0;
                value = 1;
            break;

            case 5:
                status = 0;
                quit = 1;
            break;

            default:
                printf("That is not a valid option.\n");
                quit = 1;
        }

        if (1 == quit || 1 != value)
        {
            printf("\nGoodbye!\n\n");
            break;
        }
        else if (1 == valid)
        {
            printf("Please enter your total gross taxable income: ");
            accept = scanf("%f", &gross);

            if (1 != accept)
            {
                printf("\nInvalid input, please try again.\n\n");
            }
            else
            {
                if (bracket >= gross)
                {
                    tax_1(gross);
                }
                else
                {
                    tax_2(gross);
                }

                printf("\nYour taxable liability is\n\n%.2f\n", tax);

                // flag to start second iteration of while loop
                status = 1;
            }
        }
        else
        {
            // reiterate the loop
            status = 1;
        }
    }

    return 0;
}

/*******************************************************************************
 * Functions Tax
 */

float tax_1(float gross)
{
    basetax = (bracket * BASERATE);

    return tax;
}

float tax_2(float gross)
{
    basetax = (bracket * BASERATE);
    tax = (basetax + ((gross - bracket) * RATE_2));

    return tax;
}
