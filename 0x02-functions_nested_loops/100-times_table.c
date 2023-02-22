#include "holberton.h"

/**
  * print_times_table - Prints a multiplication table up to param
  * @n: The number to be treated
  *
  * Return: Number matrix
  */
void print_times_table(int n)
{
<<<<<<< HEAD
	int x, y, z;
=======
	int row, col;
	int product = 0;
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
<<<<<<< HEAD
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
=======
			for (col = 0; col <= n; col++)
			{
				product = (row * col);
				if (product < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
				}
				else if (z > 9)
				{
<<<<<<< HEAD
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
=======
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product % 100) / 10) + '0');
					_putchar((product % 10) + '0');
				}
				if (col != n)
					_putchar(',');
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
			}
			_putchar('\n');
		}
	}
}
<<<<<<< HEAD

=======
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
