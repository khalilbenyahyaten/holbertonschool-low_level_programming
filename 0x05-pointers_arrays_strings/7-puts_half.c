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
int i, j, k;
j = 0;
i = 0;
k = 0;
for (i = 0; str[i] ; i++)
{
}
if (i % 2 == 0)
{
j = i / 2;
for (k = j; k <= i; k++)
{
_putchar(str[k]);
}
}
else
{
j = (j + 1) / 2;
for (k = j; k <= i; k++)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
