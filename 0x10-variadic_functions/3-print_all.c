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
separator = "";
c = format[i];
switch (c)
{
case 'c':
printf("%c%s", va_arg(valist, int), separator);
break;
case 'i':
printf("%d%s", va_arg(valist, int), separator);
break;
case 'f':
printf("%f%s", va_arg(valist, double), separator);
break;
case 's':
str = va_arg(valist, char *);
if (str == '\0')
{
str = "(nil)";
}
printf("%s%s", str, separator);
break;
}
i++;
}
va_end(valist);
printf("\n");
}
