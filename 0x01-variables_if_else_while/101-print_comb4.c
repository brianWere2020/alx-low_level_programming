#include <stdio.h>

/**
 * The program prints all possible different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 */

int main(void)
{
	int digit1 = 48;
	int digit2, n3;
	int com = 44;

	while (digit1 <= 57)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 57)
		{
			n3 = digit2 + 1;
			while (n3 <= 57)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(n3);
				if (digit1 != 55 || digit2 != 56 || n3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				n3 += 1;
			}
			digit2 += 1;
		}
		digit1 += 1;
	}
	putchar('\n');
	return (0);
}
