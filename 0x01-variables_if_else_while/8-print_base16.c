#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * It is a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
		putchar('\n');

	return (0);
}
