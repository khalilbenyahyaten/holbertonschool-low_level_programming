#include "holberton.h"
/**
 *print_rev - print a string reversed
 *
 *
 *@s: pointer
 *
 *
 */
void print_rev(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
s++;
i++;
}
while (i >= 0)
{
i--;
s--;
_putchar(*s);
}
_putchar('\n');
}
