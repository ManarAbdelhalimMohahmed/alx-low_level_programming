#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - start point of the program
*
* Return: always must be 0 in case you are using int if you using void
*
*  no need to return keyword
*/
int main(void)
{
/* declare a new int variable */
int reminder = 0;
int n;
/* to generate a seed value that  rand() based on */
srand(time(0));
/* rand() random number generator  fun in c */
/* RAND_MAX an integer constant representing */
/* the largest value the rand function can return */
/* In the GNU C Library, it is 2147483647 */
n = rand() - RAND_MAX / 2;
/* using modulus operator % as a reminder */
reminder = n % 10;
/* if condition check last digit in n value*/
if (reminder > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, reminder);
}
else if (reminder == 0)
{
printf("Last digit of %d is %d and is 0\n", n, reminder);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, reminder);
}
return (0);
}
