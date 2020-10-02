#include "holberton.h"
/**
 * *cap_string - capitalises all words
 *
 *
 *@str: string
 *
 *
 *Return: string
 */
char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
{
str[i] = str[i] - 32;
}
}
return (str);
}
