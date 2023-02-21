#include "stdio.h"

/**
 * It is a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 * You are allowed to use the standard library
 */

int main(void)
{
	long x = 0;
	long y = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = y + x;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		x = y;
		y = fib;
		n += 1;
	}
	return (0);
}
