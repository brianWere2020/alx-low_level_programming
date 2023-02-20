#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 */

int main(void)
{
int lower = 'a';
int upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower += 1;
}
while (upper <= 'Z')
{
putchar(upper);
upper += 1;
}
putchar('\n');
return (0);
}
