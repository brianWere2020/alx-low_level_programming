#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * It is a program that prints the alphabet in lowercase, followed by a new line
 */
int main(void)
{
	char lowercase, e, q;

	e = 'e';
	q = 'q';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != e && lowercase != q)
			putchar(lowercase);
	}
		printf("\n");

	return (0);
}
