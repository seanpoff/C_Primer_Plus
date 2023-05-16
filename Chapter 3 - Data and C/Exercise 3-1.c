/* Find out what your system does with integer overflow, floating-point
 * overflow, and floating-point underflow by using the experimental approach;
 * that is, write programs having these problems. (You can check the discussion
 * in Chapter 4 of limits.h and float.h to get guidance on the largest and
 * smallest values.)
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    printf("\nLargest integer on this machine: %d\n", INT_MAX);
    printf("Example of overflow: %d + 1 = %d\n", INT_MAX, (INT_MAX + 1));

    printf("\nLargest floating-point on this machine: %f\n", FLT_MAX);
    printf("Example of overflow: %d + 1 = %f\n", FLT_MAX, (FLT_MAX + 1));

    printf("\nSmallest floating-poing on this machine: %e\n", FLT_MIN);
    printf("Example of underflow: %e / 10 = %e\n\n", FLT_MIN, (FLT_MIN / 10));

    return 0;
}
