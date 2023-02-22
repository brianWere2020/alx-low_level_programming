#include "holberton.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet(void)
{
<<<<<<< HEAD
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
=======
	int lowercase = 'a';
	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase += 1;
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
	}

	_putchar('\n');
}

