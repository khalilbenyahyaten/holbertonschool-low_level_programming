#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
  int i, k, j, x = 0;
  unsigned int n = 0;
  char *str = "";
  if (b == NULL)
    return (0);  
for (i = 0; b[i] != '\0'; i++)
    {
      if (b[i] < '0' || b[i] > '9')
	return (0);
    }
  j = i - 1;
  for (i = 0; b[i] != '\0'; i++)
    {
      str[0] = b[i];
      str[1] = '\0';
    x = atoi(str);
      for (k = 0; k < j; k++)
	{
	x = x * x;
	}
      n += x;
      j -= 1;
    }
  return (n);
}
