#include <stdlib.h>
#include "holberton.h"
/**
 * *create_array - create an array and initializes it with a string
 *
 *@size: array size
 *@c: string
 *
 *Return: string or null
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ch;

if (size == 0)
{
return (NULL);
}
ch = malloc(size * sizeof(char));
if (ch == '\0')
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
ch[i] = c;
}
ch[size + 1] = '\0';
return (ch);
}
