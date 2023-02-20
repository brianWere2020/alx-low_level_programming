#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * It is a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
		printf("\n");

	return (0);
}
