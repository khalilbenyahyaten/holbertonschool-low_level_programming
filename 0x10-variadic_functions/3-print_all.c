#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all formats
 *@format: formats
 *Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int i;
va_list valist;
char *separator, *str, c;
separator = ", ";
va_start(valist, format);
i = 0;
while (format && format[i])
{
if (format[i + 1] == '\0')
separator = '\0';
c = format[i];
switch (c)
{
case 'c':
printf("%s%c", separator, va_arg(valist, int));
break;
case 'i':
printf("%s%d", separator, va_arg(valist, int));
break;
case 'f':
printf("%s%f", separator, va_arg(valist, double));
break;
case 's':
str = va_arg(valist, char *);
if (str == '\0')
{
str = "(nil)";
}
printf("%s%s", separator, str);
break;
}
i++;
}
va_end(valist);
printf("\n");
}
