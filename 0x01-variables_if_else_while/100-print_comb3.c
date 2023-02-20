#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * It is  program that prints all possible different combinations of two digits.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 90; digit++)
	{
		for ()
		{
			putchar((digit / 10) + '0');
			putchar((digit % 10) + '0');
		}
		if (digit != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
