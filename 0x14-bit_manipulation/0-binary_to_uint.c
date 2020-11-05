#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to decimal
 *
 *@b: string containing a binary number
 *
 *Return: integer
 *
 */
unsigned int binary_to_uint(const char *b)
{
int j, i, k, x = 0;
unsigned int n = 0;

if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
j = 1;
for (k = i - 1; k >= 0; k--)
{
x = b[k] - '0';
x = x *j;
j = j * 2;
n = n + x;
}
return (n);
}
