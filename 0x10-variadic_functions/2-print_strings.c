#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print string
 *
 *@separator: string to be printed between strings
 *@n: number of strings
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

va_start(valist, n);
for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str == '\0')
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i + 1 != n && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(valist);
return;
}
