#include "holberton.h"

/**
<<<<<<< HEAD
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
=======
 * It is a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: x10 a-z
 */
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}

