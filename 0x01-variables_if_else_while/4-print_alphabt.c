#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 */

int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase == 'q' || lowercase == 'e')
{
lowercase += 1;
}
else
{
putchar(lowercase);
lowercase += 1;
}
}
putchar('\n');
return (0);
}
