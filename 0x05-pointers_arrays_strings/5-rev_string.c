#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * rev_string -reverse a string
 *
 *@s: string to reverse
 *
 *Return: void
 */
void rev_string(char *s)
{
int k = 0, i, j = 0;
char *str;

for (k = 0; s[k] != '\0'; k++)
{
}
str = malloc(sizeof(char) * k);
i = k - 1;
while (j < k)
{
str[j] = s[i];
j++;
i--;
}
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
free(str);
s[i] = '\0';
}
