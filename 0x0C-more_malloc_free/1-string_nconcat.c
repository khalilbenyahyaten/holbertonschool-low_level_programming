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
unsigned int i, j, k, l;
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
if (j > n)
j = n;
str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
return (NULL);
for (l = 0; l < i; l++)
str[l] = s1[l];
for (k = 0; k < j; k++)
{
str[k + l] = s2[k];
}
str[l + k] = '\0';
return (str);
}
