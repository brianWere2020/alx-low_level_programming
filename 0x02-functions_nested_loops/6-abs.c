#include "ALX.h"

/**
 * It is a a function that computes the absolute value of an integer.
 * Prototype: int _abs(int);
 * FYI: The standard library provides a similar function: abs. Run man abs to learn more.
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
		return (i);
}
