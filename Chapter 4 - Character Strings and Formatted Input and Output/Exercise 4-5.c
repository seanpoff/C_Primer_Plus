/* Write a program that requests the download speed in megabits per second
 * (Mbs) and the size of a file in megabytes (MB). The program should calculate
 * the download time for the file. Note that in this context one byte is eight
 * bits. Use type float, and use / for division. The program should report all
 * three values (download speed, file size, and download time) showing two
 * digits to the right of the decimal point, as in the following:
 *
 *      At 18.12 megabits per second, a file of 2.20 megabytes downloads in
 *      0.97 seconds
 */
#include <stdio.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    float speed = 0;
    float size = 0;
    float time = 0;

    printf("\nEnter your download speed (in megabits per second): ");
    scanf("%f", &speed);

    printf("Enter the size of the file you're downloading (in megabytes): ");
    scanf("%f", &size);

    time = ((size * 8) / speed);

    printf("\nAt %.2f megabits per second, a file of %.2f megabytes downloads "
           "in %.2f seconds.\n\n", speed, size, time);

    return 0;
}
