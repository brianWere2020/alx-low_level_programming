#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
<<<<<<< HEAD
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
=======
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
		}
	}
	if (n == 98)
	{
<<<<<<< HEAD
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
=======
		printf("%d\n", n);
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
	}
}

