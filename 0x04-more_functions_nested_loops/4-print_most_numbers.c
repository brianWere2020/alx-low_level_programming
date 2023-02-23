/*
 * File: 4-print_most_numbers.c
 * Auth: Brian Were
 */

#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb != 2 && numb != 4)
			_putchar((numb % 10) + '0');
	}

	_putchar('\n');
}