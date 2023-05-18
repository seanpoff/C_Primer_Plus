/* Professor Rabnud joined a social media group. Initially he had five friends.
 * He noticed that his friend count grew in the following fashion. In the first
 * week one friend droped out and the remaining number of friends doubled. The
 * second week two friends dropped out and the remaining number of friends
 * doubled. In general, in the nth week, n friends dropped out and the remaining
 * number doubled. Write a program that computes and displays the number of
 * friends each week. The program should continue until the count exceeds
 * Dunbar's number. Dunbar's number is a rough estimate of the maximum size of a
 * cohesive social group in which each member knows every other member and how
 * they relate to one another. It's approximate value is 150.
 */
#include <stdio.h>

/*******************************************************************************
 * Macro Definitions
 */

#define DUNBAR      (150)

/*******************************************************************************
 * Function Main
 */

int main(void)
{
    int friends = 5;
    int weeks = 0;

    for (weeks = 1; friends < DUNBAR; weeks++)
    {
        printf("\nProfessor Rabnud had %d friends at the start of week %d.\n",
               friends, weeks);

        friends += ((friends - weeks) * 2) - weeks;        
    }

    printf("\n");

    return 0;
}
