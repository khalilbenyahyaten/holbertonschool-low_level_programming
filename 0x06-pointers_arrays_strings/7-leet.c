#include "holberton.h"
/**
 * *leet - change certain letters with certain numbers
 *
 *
 *@str: string
 *
 *
 *Return: string
 *
 */
char *leet(char *str)
{
int i, j;
char ch[] = "4433007711";
char ch1[] = "AaEeOoTtLl";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; ch1[j] != '\0'; j++)
{
if (str[i] == ch1[j])
{
str[i] = ch[j];
}
}
}
return (str);
}
