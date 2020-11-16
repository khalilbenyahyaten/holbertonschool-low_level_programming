#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concats two strings
 *
 *@s1: string
 *@s2: string
 *@n: number of bytes to concat from s2
 *
 *Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *str;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i] != '\0'; i++)
{
}
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j] != '\0'; j++)
{
}
}
if (j < n)
n = j;
str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
str[i] = s1[i];
for (k = 0; k < n; k++)
{
str[i] = s2[k];
i++;
}
str[i] = '\0';
return (str);
}
