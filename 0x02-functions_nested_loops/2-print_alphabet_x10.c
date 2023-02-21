#include "ALX.h"
/**
 * It is a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i, count;

	count = 0;

	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		count++;
		_putchar('\n');
	}
}
