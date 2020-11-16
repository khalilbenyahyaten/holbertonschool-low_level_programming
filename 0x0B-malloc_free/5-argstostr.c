#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concats arguments into a string
 *
 *@ac: number of arguments
 *@av: arguments
 *
 *Return: string
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, l, m, sum = 0;
if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);
for (j = 0; av[j] != NULL; j++)
{
if (av[j] == NULL)
{
return (0);
}
i = 0;
while (av[j][i] != '\0')
{
i++;
}
sum += i;
}
str = malloc(sizeof(char) * (sum + ac));
if (str == NULL)
return (0);
l = 0;
for (k = 0; k < ac; k++)
{
m = 0;
while (av[k][m] != '\0')
{
str[l] = av[k][m];
l++;
m++;
}
str[l] = '\n';
l++;
}
str[l] = '\0';
return (str);
}
