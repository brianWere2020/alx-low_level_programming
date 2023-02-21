#include "ALX.h"

/**
 * main - program that prints _putchar
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_ptchr[8] = "_putchar";

	while (n < 8)
	{
		_putchar(str_ptchr[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
