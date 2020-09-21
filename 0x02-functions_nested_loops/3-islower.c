#include "holberton.h"
/**
 * main - main function
 *
 *Description: checks if a charachter is lowercase or uppercase
 *
 *Return: depends on the charachter
 *
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
