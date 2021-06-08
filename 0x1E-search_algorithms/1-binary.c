#include "search_algos.h"
/**
* binary_search - binary search algorithm
* @array: array
* @size: array size
* @value: value to search for
* Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	for (r = size - 1, l = 0; l <= r;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}