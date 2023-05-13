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

// declare constants #define method
#define PAY_1 8.75              // hourly payrate
#define PAY_2 9.33              // hourly payrate
#define PAY_3 10.00             // hourly payrate
#define PAY_4 11.20             // hourly payrate
#define BASEHRS 40              // max hours before overtime
#define OT_RATE 1.5             // overtime rate
#define BRACKET_1 300           // max limit of first tax bracket
#define BRACKET_2 150           // max limit of second tax bracket
#define TAX_RATE_1 0.15         // tax rate of first tax bracket
#define TAX_RATE_2 0.20         // tax rate of second tax bracket
#define TAX_RATE_3 0.25         // tax rate of third tax bracket

int main(void)
{
    // initialize variables
    int quit = 0;
    int valid = 0;
    int value = 0;
    int status = 0;
    int choice = 0;

    float baserate = 0;
    float taxes = 0;
    float hours = 0;
    float gross = 0;
    float net = 0;

    a:
    // prompt for user input
    printf("****************************************************************\n"
        "Enter the number corresponding to the desired pay rate or action:\n"
        "1) $8.75/hr                          2) $9.33/hr\n"
        "3) $10.00/hr                         4) $11.20/hr\n"
        "5) quit\n"
        "****************************************************************\n\n");    
    status = scanf("%d", &choice);
    
    // flag to determine calculations after while loop
    value = 0;

    // if characters are entered instead of numbers
    while (1 != status) {
        printf("\nInvalid entry. Please try again.\n\n");
        quit = 1;
        break;
    }
    while (status) {
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
                printf("\nGoodbye!\n\n");
                status = 0;
                value = 0;
                quit = 1;
            break;

            default :
                printf("\nPlease select a valid option.\n\n");
                goto a;
        }
    }

    // prevent non-numerical input
    if (value) {
        
        printf("\nEnter the number of hours worked.\n\n");

        // use valid flag to verify numerical input
        valid = scanf("%f", &hours);
        
        // if input is valid
        if (valid) {
            // determine gross pay with and without overtime
            if (40 < hours) {
                gross = ((BASEHRS * baserate) + (((hours - BASEHRS) 
                    * baserate) * OT_RATE));
            } else {
                gross = (hours * baserate);
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
        } 
        
        // if input is invalid
        else {
            printf("\nInvalid input, please try again.\n\n");
        }
    
    // display response to invalid input
    } else if (0 == quit) {
        printf("\nInvalid input, please try again.\n\n");
    }
    return 0;
}
