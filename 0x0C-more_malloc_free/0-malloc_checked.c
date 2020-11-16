#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 *
 *@b: size of alocated memory
 *
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
