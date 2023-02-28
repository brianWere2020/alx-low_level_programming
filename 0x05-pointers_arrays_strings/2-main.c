#include "main.h"
#include <stdio.h>

/**
 * main - check the code for ALX cohort 12 students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
