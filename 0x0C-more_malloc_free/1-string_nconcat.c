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
unsigned int i, j;
char *str;
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
if (j < n)
{
str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
}
else
{
str = malloc(sizeof(char) * (i + n + 1));
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
}
str[i + 1] = '\0';
return (str);
}
