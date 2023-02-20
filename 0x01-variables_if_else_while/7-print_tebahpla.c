#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * It is a program that prints the lowercase alphabet in reverse, followed by a new line.
 */
int main(void)
{
	char lowAlphabet;

	for (lowAlphabet = 'z'; lowAlphabet >= 'a'; lowAlphabet--)
		putchar(lowAlphabet);
		putchar('\n');

	return (0);
}
