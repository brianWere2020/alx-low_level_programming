#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This program will assign a random number to the variable n each time it is executed
 */
int main(void)
{
	int n;
	int lastDigit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, lastDigit);
	else if (lastDigit == 0)
		printf("%s %d is %d and is 0\n", str, n, lastDigit);
	else if (lastDigit < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lastDigit);

	return (0);
}
