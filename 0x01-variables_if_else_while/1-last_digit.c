#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 */

int main(void)
{
int n;
int finaln;

srand(time(0));
n = rand() - RAND_MAX / 2;
finaln = n % 10;
if (finaln > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, finaln);
}
else if (finaln == 0)
{
printf("Last digit of %d is %d and is 0\n", n, finaln);
}
else if (finaln < 6 && finaln != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, finaln);
}
return (0);
}
