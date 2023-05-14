/* The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for
 * $1.15/per pound, and carrots for $1.09 per pound. It gives a 5% discount
 * for orders of $100 or more prior to adding shipping costs. It charges $6.50
 * shipping and handling for any order of 5 pounds or under, $14.00 shipping
 * and handling for orders over 5 pounds and under 20 pounds, and $14.00 plus
 * $0.50 per pound for shipments of 20 pounds or more.
 * 
 * Write a program that uses a switch statement in a loop such that a response
 * of 'a' lets the user enter the pounds of artichokes desired, 'b' the pounds
 * of beets, 'c' the pounds of carrots, and 'q' allows the user to exit the
 * ordering process. The program should keep track of cumulative totals. That
 * is, if the user enters 4 pounds of beets and later enters 5 pounds of beets,
 * the program should report 9 pounds of beets.
 * 
 * The program then should compute the total charges, the discount, if any,
 * the shipping charges, and the grand total. The program then should display
 * all the purchase information: the cost per pound, the pounds ordered, and
 * the cost for that order for each vegetable, the total cost of the order,
 * the discount (if there is one), the shipping charge, and the grand total of
 * all the charges.
 */
#include <stdio.h>
#include <ctype.h>

/*******************************************************************************
 * Macro Definitions
 */

// price per pound
#define P_ART              (2.05)
#define P_BEET             (1.15)
#define P_CAR              (1.09)

// shipping weight brackets
#define MIN_W              (5.00)
#define MAX_W              (20.00)

// min purchase price for discount
#define DISC_QUAL          (100)

// discount percentage
#define DISC               (0.05)

// shipping fees
#define BASE_SHIP          (6.50)
#define AVG_SHIP           (14.00)
#define BULK_SHIP          (0.50)

/*******************************************************************************
 * Function Prototypes
 */

float save(float subtotal);
float ship_cost(float gross_lbs);
float cost(float art_lbs, float beet_lbs, float car_lbs);
float weight(float art_lbs, float beet_lbs, float car_lbs);

/*******************************************************************************
 * Global Variables
 */

float disc = 0;
float car_cnt = 0;
float art_cnt = 0;
float car_lbs = 0;
float art_lbs = 0;
float beet_lbs = 0;
float beet_cnt = 0;
float subtotal = 0;
float shipping = 0;
float gross_lbs = 0;

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    // initialize local variables
    char veg = 'a';
    char repeat = 'n';

    int quit = 0;
    int next = 0;
    int status = 1;

    float total = 0;

    while (1 == status)
    {
        printf("\nChoose from the following what you'd like to buy:\n"
            "******************************************************\n"
            "a) Artichokes ($2.05/lb)        b) beets ($1.15/lb)\n"
            "c) Carrots ($1.09/lb)           n) next\n"
            "q) quit\n"
            "******************************************************\n\n");

        veg = tolower(getchar());

        switch (veg)
        {
            case 'a' :
                printf("Enter the amount you'd like (in pounds): ");
                scanf("%f", &art_cnt);
                art_lbs += art_cnt;

                printf("\nTotal (lbs): %.2f\n", (art_lbs));
                while ('\n' != (getchar()));
            break;

            case 'b' :
                printf("Enter the amount you'd like (in pounds): ");
                scanf("%f", &beet_cnt);
                beet_lbs += beet_cnt;

                printf("\nTotal (lbs): %.2f\n", (beet_lbs));
                while ('\n' != (getchar()));
            break;

            case 'c' :
                printf("Enter the amount you'd like (in pounds): ");
                scanf("%f", &car_cnt);
                car_lbs += car_cnt;

                printf("\nTotal (lbs): %.2f\n", (car_lbs));
                while ('\n' != (getchar()));
            break;

            case 'n' :
                next = 1;
                while('\n' != (getchar()));
            break;

            case 'q' :
                quit = 1;
                status = 0;
            break;

            default:
                printf("Not a valid entry, please try again.\n");
                while('\n' != (getchar()));
        }

        if (1 == quit)
        {
            printf("\nCome again soon!\n\n");
            break;
        }

        if (1 == next)
        {
            weight(art_lbs, beet_lbs, car_lbs);

            cost(art_lbs, beet_lbs, car_lbs);

            save(subtotal);

            ship_cost(gross_lbs);

            printf("\nReceipt\n"
                   "******************************************************\n"
                   "Artichokes (%.2flbs @ %.2f/lb) $%10.2f\n"
                   "Beets      (%.2flbs @ %.2f/lb) $%10.2f\n"
                   "Carrots    (%.2flbs @ %.2f/lb) $%10.2f\n", art_lbs, P_ART,
                   (art_lbs * P_ART), beet_lbs, P_BEET, (beet_lbs * P_BEET),
                   car_lbs, P_CAR, (car_lbs * P_CAR));

            total = ((subtotal - disc) + shipping);

            printf("******************************************************\n"
                   "Subtotal:       %.2f\n", subtotal);

            // hide discount if not applicable
            if (DISC_QUAL <= subtotal)
            {
                printf("Discount:       %.2f\n", disc);
            }

            printf("Total Weight:            %.2flbs\n"
                   "Shipping:       %.2f\n"
                   "******************************************************\n"
                   "Grand Total: %18.2f\n"
                   "******************************************************\n", 
                   gross_lbs, shipping, total);

            printf("\nWould you like to do more shopping? (Y/N) ");
            repeat = getchar();

            if ('n' == repeat)
            {
                printf("\nThanks for shopping with us!\n\n");
                quit = 1;
                status = 0;
            }
            else
            {
                // resest accumulated counts
                art_lbs = 0;
                car_lbs = 0;
                beet_lbs = 0;

                art_cnt = 0;
                car_cnt = 0;
                beet_cnt = 0;

                status = 1;
                next = 0;
                quit = 0;

                while('\n' != (getchar()));
            }
        }
    }

    return 0;
}

/*******************************************************************************
 * Functions
 */

float ship_cost(float gross_lbs)
{
    if ((MAX_W > gross_lbs) && (MIN_W < gross_lbs))
    {
        shipping = AVG_SHIP;
    }
    else if (MAX_W < gross_lbs)
    {
        shipping = AVG_SHIP + ((gross_lbs - MAX_W) * BULK_SHIP);
    }
    else
    {
        shipping = BASE_SHIP;
    }

    return shipping;
}

float save(float subtotal)
{
    if (DISC_QUAL <= subtotal)
    {
        disc = (subtotal * DISC);
    }
    else
    {
        disc = 0;
    }

    return disc;
}

float cost(float art_lbs, float beet_lbs, float car_lbs)
{
    subtotal = (art_lbs * P_ART) + (beet_lbs * P_BEET) + (car_lbs * P_CAR);

    return subtotal;
}

float weight(float art_lbs, float beet_lbs, float car_lbs)
{
    gross_lbs = (art_lbs + beet_lbs + car_lbs);

    return gross_lbs;
}
