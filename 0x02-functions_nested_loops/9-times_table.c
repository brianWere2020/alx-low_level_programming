#include "ALX.h"

/**
 * This a function that prints the 9 times table, starting with 0.
 * Prototype: void times_table(void); * 
 */

void times_table(void)
{
	int row, column;
	int product = 0;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = (row * column);
			if (product < 10)
			{
				if (column != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (column != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
