#include <stdio.h>

/**
 * The program prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 */

int main(void)
{
int digit1 = 48;
int digit2 = 48;
int com = 44;
while (digit1 <= 57)
{
digit2 = 48;
while (digit2 <= 57)
{
putchar(digit1);
putchar(digit2);
if (digit1 != 57 || digit2 != 57)
{
putchar(com);
putchar(32);
}
digit2 += 1;
}
digit1 += 1;
}
putchar('\n');
return (0);
}
