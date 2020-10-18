#include <stdlib.h>
#include "holberton.h"
/**
 * **alloc_grid - return a pointer to a two dimentional array of integers
 *
 *@width: width of array
 *@height: height of array
 *
 *Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
int **m;
int i, j, k;

if (width <= 0 || height <= 0)
{
return (NULL);
}
m = malloc(sizeof(int *) * height);
if (m == 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
m[i] = malloc(sizeof(int) * width);
if (m[i] == 0)
{
for (j = 0; j <= i; j++)
{
free(m[j]);
}
free(m);
return (0);
}
for (k = 0; k < width; k++)
{
m[i][k] = 0;
}
}
return (m);
}
