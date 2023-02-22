<<<<<<< HEAD
#include "holberton.h"

=======
#include "ALX.h"
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
/**
  * print_sign - Prints the sign of a number
  * @n: The number to be checked
  *
  * Return: 1 for positive num, -1 for negative num or zero for anything else
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
