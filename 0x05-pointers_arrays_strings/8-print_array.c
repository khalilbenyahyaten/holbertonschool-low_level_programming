#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 *
 *@a: array
 *@n: number of elements to print
 *
 *Return: void
 */
void print_array(int *a, int n)
{
int i;
char *sep = ", ";

for (i = 0; i < n - 1; i++)
{
printf("%d%s", a[i], sep);
}
printf("%d\n", a[i]);
}
