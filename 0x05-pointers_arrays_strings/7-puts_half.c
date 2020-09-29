#include "holberton.h"
/**
 *puts_half - prints half a string
 *
 *@str: pointer
 *
 *
 */
void puts_half(char *str)
{
int i, n, k;
n = 0;
for (i = 0; str[i] ; i++)
{
}
if (i % 2 == 0)
{
n = i / 2;
for (k = n; k < i; k++)
{
_putchar(str[k]);
}
}
else
if (i % 2 != 0)
{
n = (i - 1) / 2;
for (k = n; k < i; k++)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
