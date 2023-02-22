#include <stdio.h>
#include <stdlib.h>
#include "ALX.h"

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
<<<<<<< HEAD

		i++;
	}

	printf("%d\n", z);
=======
		multiple += 1;
	}
	printf("%d\n", res);
>>>>>>> 09bfab7c36756e6b327b011a7da0713592e892b4
	return (0);
}
