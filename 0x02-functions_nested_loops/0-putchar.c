#include "ALX.h"

/**
 * It is a program that prints _putchar, followed by a new line.
 *
 * Return: int
 */

int main(void)
{
	int i = 0;
	char str_ptchr[7] = "_putchar";

	while (i < 7)
	{
		_putchar(str_ptchr[i]);
		i += 1;
	}
	_putchar('\n');
	return (0);
}
