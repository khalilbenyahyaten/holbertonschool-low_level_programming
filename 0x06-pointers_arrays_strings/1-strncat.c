#include "holberton.h"
/**
 * *_strncat - concatenates two strings
 *
 *@dest: destination
 *@src: source
 *@n: int
 *
 *Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;

for (k = 0; src[k] != '\0'; k++)
{
}
for (i = 0; dest[i] != '\0'; i++)
{
}
if (k > n)
{
for (j = 0; j != n; j++)
{
dest[i] = src[j];
}
}
else if (k < n)
{
for (j = 0; j != k; j++)
{
dest[i] = src[j];
}
}
return (dest);
}
