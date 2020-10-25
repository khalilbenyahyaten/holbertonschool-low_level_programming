#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all formats
 *@format: formats
 *Return: void
 */
void print_all(const char * const format, ...)
{
int i;
va_list valist;
char *separator, *str, c;
separator = ", ";
va_start(valist, format);
i = 0;
while (format[i] && format)
{
if (format[i + 1] == '\0')
separator = "";
c = format[i];
switch (c)
{
case 'c':
printf("%c", va_arg(valist, int));
printf("%s", separator);
break;
case 'i':
printf("%d", va_arg(valist, int));
printf("%s", separator);
break;
case 'f':
printf("%f", va_arg(valist, double));
printf("%s", separator);
break;
case 's':
str = va_arg(valist, char *);
if (str == '\0')
{
str = "(nil)";
}
printf("%s", str);
printf("%s", separator);
break;
}
i++;
}
printf("\n");
}
