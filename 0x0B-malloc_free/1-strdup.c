#include <stdlib.h>
#include "holberton.h"
/**
 * *_strdup - allocate a space and copy a string
 *
 *@str: string
 *
 *Return: string null
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *ch;

for (i = 0; str[i]; i++)
{
}
if (str == '\0')
{
return (NULL);
}
ch = malloc(i * sizeof(char) + 1);
if (ch == '\0')
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
ch[j] = str[j];
}
ch[j + 1] = '\0';
return (ch);
}
