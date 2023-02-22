/*
 * File: 1-alphabet.c
 * Auth: Brian Were
 */

#include "loops.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lowAlpha;

	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
		_putchar(lowAlpha);

	_putchar('\n');
}