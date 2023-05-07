/* inches.c -- converts height in cm to height in inches */
#include <stdio.h>

// declare function prototype
int height_out(void);

// declare and initialize global variables
int height_in = 0;
int feet_out = 0;

float raw_height = 0;
float inches_out = 0;

int main(void)
{
    // declare and initialize local variable
    int status = 0;

    // prompt for user input
    printf("\nEnter your height in cm. ");
    status = scanf("%d", &height_in);

    // if valid entry, complete conversion
    if (status == 1)
    {
        // call function to complete conversion
        height_out();
    }

    // if invalid entry, terminate program
    else {
        printf("\nSorry, that was an invalid entry.\n\n");
    }

    return 0;
}

// conversion function
int height_out(void)
{
    // centimeter to feet
    raw_height = ((height_in / 2.54) / 12);

    // isolate just the integer of feet value
    feet_out = (int)raw_height;

    // take remaining decimal value and convert to inches
    inches_out = (raw_height - feet_out) * 12;

    // display results
    printf("\n%d centimeters is %dft, %.1f inches tall!\n\n",
        height_in, feet_out, inches_out);

    return 0;
}
