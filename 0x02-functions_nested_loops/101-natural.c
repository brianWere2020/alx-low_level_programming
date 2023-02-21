#include <stdio.h>

/**
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 
 * or 5 below 1024 (excluded), followed by a new line.
 * You are allowed to use the standard library.
 */

int main(void)
{
	int multiple = 0;
	int res = 0;

	while (multiple < 1024)
	{
		if (multiple % 3 == 0 || multiple % 5 == 0)
		{
			res += multiple;
		}
		multiple += 1;
	}
	printf("%d\n", res);
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include "ALX.h"
/**
 * main - Entry point
 */
int main(void)
{

	return (0);
}
