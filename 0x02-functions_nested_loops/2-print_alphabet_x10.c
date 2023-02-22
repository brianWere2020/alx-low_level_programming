/*
 * File: 2-print_alphabet_x10.c
 * Auth: Brian Were
 */

#include "loops.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char lowLetter;

	while (count++ <= 9)
	{
		for (lowLetter = 'a'; lowLetter <= 'z'; lowLetter++)
			_putchar(lowLetter);
		_putchar('\n');
	}
}
