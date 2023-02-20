#include <stdio.h>

<<<<<<< HEAD
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 */

=======
//main - program that prints the alphabet in lowercase, and then in uppercase,
  
>>>>>>> 4af23ed915d933465ab9e964884823bbaade095e
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
<<<<<<< HEAD
putchar(upper);
=======
putchar(up);
>>>>>>> 4af23ed915d933465ab9e964884823bbaade095e
upper += 1;
}
putchar('\n');
return (0);
}
