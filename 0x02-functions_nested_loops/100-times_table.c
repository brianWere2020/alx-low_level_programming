 #include "ALX.h"

/**
 * This is a function that prints the n times table, starting with 0.
 * Prototype: void print_times_table(int n);
 * If n is greater than 15 or less than 0 the function should not print anything
 */

void print_times_table(int n)
{
	int row, column;
	int product = 0;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);
				if (product < 10)
				{
					if (column != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
				}
				else if (product < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (column != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}