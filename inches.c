/* inches.c -- converts height in cm to in */
#include <stdio.h>

int main(void)
{
    // initialize variables
    int i_heightcm = 0;
    int i_feet_value = 0;
    
    float f_heightin = 0;
    float f_raw_height = 0;
    float f_raw_inches = 0;
    float f_inches_value = 0;
    
    // ask user for their height in cm
    printf("Enter your height in cm. ");
    scanf("%d", &i_heightcm);
    
    // convert cm to inches
    f_heightin = (i_heightcm / 2.54);
    
    // display height in inches
    printf("\n%d centimeters is %.2f inches tall.\n",
           i_heightcm, f_heightin);
    
    // get the raw height value (5.89ft)
    f_raw_height = (f_heightin / 12);
    
    // separate the integer value from the decimal value
    i_feet_value = (int)f_raw_height;
    f_raw_inches = (f_raw_height - i_feet_value);
    
    // convert foot decimal to actual inches
    f_inches_value = (f_raw_inches * 12);
    
    // display actual height using feet and inches
    printf("That means you're %dft, %.1f inches tall!\n",
           i_feet_value, f_inches_value);
    
    return 0;
}
