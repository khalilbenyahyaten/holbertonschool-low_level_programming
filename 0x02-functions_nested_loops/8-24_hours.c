#include "holberton.h"
/**
 *jack_bauer - main function
 *
 *Description: prints every minute of a day
 *
 *Return: void
 *
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
_putchar (':');
_putchar (j / 10 + '0');
_putchar (j % 10 + '0');
_putchar ('\n');
}
}
return;
}
