#include <stdio.h>

/**
 * The program prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 */

int main(void)
{
	int digit1 = 48;
	int a = 0;
	int d;
	int com = 44;

	while (a <= 99)
	{
		d = a + 1;
		while (d <= 99)
		{
			putchar((a / 10) + digit1);
			putchar((a % 10) + digit1);
			putchar(32);
			putchar((d / 10) + digit1);
			putchar((d % 10) + digit1);
			if (a != 98 || d != 99)
			{
				putchar(com);
				putchar(32);
			}
			d += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
