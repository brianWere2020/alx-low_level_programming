#include "holberton.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int last;

<<<<<<< HEAD
	last = n % 10;
=======
	lastDigit = (num % 10);
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

