#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: integer
 * @max: integer
 *
 * Return: pointer to newly allocated memory
 */
int *array_range(int min, int max)
{
int i, j;
int *ten;

if (min > max)
return (NULL);
j = max - min + 1;
ten = malloc(sizeof(int) * j);
if (ten == NULL)
return (NULL);
for (i = 0; i < j; i++, min++)
{
ten[i] = min;
}
return (ten);
}
