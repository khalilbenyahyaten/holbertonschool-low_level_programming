#include "holberton.h"
/**
 * *_strncpy - copies a string
 *
 *@dest: string destination
 *@src: string source
 *@n: integer
 *
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return (src);
}
