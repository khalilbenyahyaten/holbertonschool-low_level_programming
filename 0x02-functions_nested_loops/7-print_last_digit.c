#include "holberton.h"
/**
 * print_last_digit - main function
 *
 *@a: last digit of a number
 *
 *Return: b
 *
 */

int print_last_digit(int a)
{
int n;
n = a % 10;
if (a < 0)
{
n = n * -1;
_putchar ('0' + n);
 return (n);
}
else
_putchar ('0' + n);
return (n);
}

