#include "holberton.h"
/**
 * _print_rev_recursion - prints a reversed string
 *
 *
 *@s : string
 *
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}
