<<<<<<< HEAD
#include "holberton.h"
=======
#include "ALX.h"
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

