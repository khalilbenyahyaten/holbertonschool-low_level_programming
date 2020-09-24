#include "holberton.h"
/**
 * print_line - main function
 *
 *
 *@n : input variable
 *
 *
 *Return: void
 *
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
else
{
_putchar ('\n');
}
_putchar('\n');
}
