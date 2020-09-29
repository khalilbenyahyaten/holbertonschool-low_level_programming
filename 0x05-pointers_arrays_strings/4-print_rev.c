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
char *i;
i = s;
while (*s != '\0')
{
s++;
}
while (s != i)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
