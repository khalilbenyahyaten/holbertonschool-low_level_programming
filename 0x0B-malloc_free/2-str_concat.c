#include <stdlib.h>
#include "holberton.h"
/**
 * *str_concat - allocate a space a concats two strings
 *
 *@s1: string
 *@s2: string
 *
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, l;
char *ch;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
{
}
for (j = 0; s2[j]; j++)
{
}
ch = malloc(sizeof(char) * (i + j + 1));
if (ch == 0)
{
return (NULL);
}
for (l = 0; l < i; l++)
{
ch[l] = s1[l];
}
while (l < i + j)
{
ch[l] = s2[l - i];
l++;
}
ch[l + 1] = '\0';
return (ch);
}
