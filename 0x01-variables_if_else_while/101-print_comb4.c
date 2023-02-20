#include <stdio.h>

/**
 * It is a program that prints all possible different combinations of three digits.
 */

int main(void)
{
	int digit1 = 48;
	int digit2, digit3;
	int com = 44;

	while (digit1 <= 57)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 57)
		{
			digit3n3 = digit2 + 1;
			while (digit3 <= 57)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 != 55 || digit2 != 56 || digit3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				digit3 += 1;
			}
			digit2 += 1;
		}
		digit1 += 1;
	}
	putchar('\n');
	return (0);
}
