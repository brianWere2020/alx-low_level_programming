#include <stdio.h>

/**
 * Program that prints the lowercase alphabet in reverse, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 */

int main(void)
{
int letter = 122;
while (letter > 96)
{
putchar(letter);
letter -= 1;
}
putchar('\n');
return (0);
}
