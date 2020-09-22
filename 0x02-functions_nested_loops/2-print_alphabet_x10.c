#include "holberton.h"
/**
 * print_alphabet_x10 - main function
 *
 *Description: prints the alphabet in lowercase 10 times
 *
 *Return: Returns void
 *
 */

void print_alphabet_x10(void)
{

int i;
int j;

for (i = 1; i <= 10 ; i++)
{
j = 'a';
while (j <= 'z')
{
_putchar(j);
j++;
}
_putchar('\n');
}
return;
}
