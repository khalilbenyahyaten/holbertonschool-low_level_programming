#include "holberton.h"
/**
 * _strlen_recursion - string length
 *
 *
 *@s: string
 *
 *
 *Return: i
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s)
{
i++;
i = i + _strlen_recursion(s + 1);
}
return (i);
}
