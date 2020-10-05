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
int i, j;
char ch[] = " \t\n,;.!?\"(){}";
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
{
str[i] = str[i] - 32;
}
else
{
for (j = 0; ch[j] != '\0'; j++)
{
if (ch[j] == str[i - 1])
{
str[i] = str[i] - 32;
}
}
}
}
}
return (str);
}
