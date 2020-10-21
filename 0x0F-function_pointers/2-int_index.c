#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for and integer
 *
 *@array: array of int
 *@size: size of array
 *@cmp: pointer to a function
 *
 *Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
return (-1);
}
if (cmp != NULL && array != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
{
return (i);
}
}
}
return (-1);
}
