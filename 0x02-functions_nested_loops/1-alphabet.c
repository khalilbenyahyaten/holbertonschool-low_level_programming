#include "holberton.h"
/**
 * print_alphabet - main function
 *
 *Description: prints the lowercase alphabet
 *
 *Return: returns 0
 *
 */
void print_alphabet(void)
{
int i;

i = 'a';
while (i <= 'z')
{
_putchar (i);
i++;
}
_putchar ('\n');
return;
}
