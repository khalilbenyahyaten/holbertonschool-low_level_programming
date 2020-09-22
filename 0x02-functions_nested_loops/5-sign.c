#include "holberton.h"
/**
 *
 *main - main function
 *
 *Description: checks the nature of a number
 *
 *
 *Return: depends on the nature of a number
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else
if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
