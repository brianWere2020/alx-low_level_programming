#include "ALX.h"

/**
 * It is a function that prints the alphabet, in lowercase, followed by a new line.
 * Returns: nothing.
 */

void print_alphabet(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowecase);
		lowercase += 1;
	}
	_putchar('\n');
	return (0);
}