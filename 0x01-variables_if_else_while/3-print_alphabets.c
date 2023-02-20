#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowcase;
	char uppercase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		putchar(lowcase);
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
		putchar('\n');

	return (0);
}
