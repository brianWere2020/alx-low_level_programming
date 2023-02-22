#include "holberton.h"

/**
<<<<<<< HEAD
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
=======
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
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
	_putchar('\n');

	return (0);
}
