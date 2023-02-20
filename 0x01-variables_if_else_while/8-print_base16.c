#include <stdio.h>

/**
 * Program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 */

int main(void)
{
int num = 48;
int l = 'a';
while (num <= 57)
{
putchar(num);
num += 1;
}
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
