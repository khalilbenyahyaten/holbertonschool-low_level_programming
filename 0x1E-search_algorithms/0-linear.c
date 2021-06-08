#include "search_algos.h"
/**
*linear_search - linear search algorithm
*@array: array
*@value: value to search for
*@size: array size
*Return: index
*/
int linear_search(int *array, size_t size, int value)
{
unsigned int i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}