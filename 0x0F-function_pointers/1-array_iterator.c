#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - execute a function on each element of an array
 *
 *@array: array
 *@size: array size
 *@action: pointer to function
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
