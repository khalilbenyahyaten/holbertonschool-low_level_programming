#include "holberton.h"
/**
 * print_square - main function
 *
 *@size: size of the square
 *
 *
 *Return: void
 *
 */
void print_square(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
