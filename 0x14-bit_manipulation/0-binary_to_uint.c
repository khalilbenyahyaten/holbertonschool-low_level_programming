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
  int j, i, k, x = 0;
  unsigned int n = 0;
  if (b == NULL)
    return (0);  
for (i = 0; b[i] != '\0'; i++)
    {
      if (b[i] != '0' || b[i] != '1')
	return (0);
    }
 i--;
 for (j = 0; b[j] != '\0'; j++)
   {
     if (b[j] == '1')
       {
	 x = 1;
	 k = 0;	 
	 while (k < i)
	   {
	     x = x * 2;
	     k++;
	   }
       }
     i--;
     n = n + x;
   }
 return (n);
}
