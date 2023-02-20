#include <stdio.h>

/**
 *program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *You are not allowed to use any variable of type char
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *You can only use putchar twice in your code
 *All your code should be in the main function
*/

int main(void)
{
<<<<<<< HEAD
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
=======
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
>>>>>>> 4af23ed915d933465ab9e964884823bbaade095e

	putchar('\n');

	return (0);
}
