#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program will assign a random number to the variable n each time it is executed. 
 * Complete the source code in order to print whether the number 
 * stored in the variable n is positive or negative.
 * You can find the source code here
 * The variable n will store a different value every time you will run this program
 * You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
