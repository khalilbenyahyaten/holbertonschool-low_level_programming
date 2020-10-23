#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all the parameters
 *
 *@n: numbers
 *
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int i;
unsigned int sum;

if (n == 0)
return (0);
va_start(valist, n);
sum = 0;
for (i = 0; i < n ; i++)
{
sum += va_arg(valist, unsigned int);
}
va_end(valist);
return (sum);
}
