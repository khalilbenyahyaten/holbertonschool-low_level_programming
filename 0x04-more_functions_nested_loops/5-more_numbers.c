#include "holberton.h"
/**
 * more_numbers - main function
 *
 *
 *
 *Return: void
 *
 */

void more_numbers(void)
{
int i, j, k;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
k = j;
if (k >= 10)
{
k = j / 10;
_putchar ('0' + k);
}
if (k < 10)
{
_putchar ('0' + j % 10);
}
}
_putchar ('\n');
}
}
