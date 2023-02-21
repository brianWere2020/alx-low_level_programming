#include "ALX.h"
/**
 * It is a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = (numb % 10);

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}

