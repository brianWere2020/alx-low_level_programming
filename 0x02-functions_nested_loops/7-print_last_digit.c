/*
 * File: 7-print_last_digit.c
 * Auth: Brian Were
 */

#include "loops.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}