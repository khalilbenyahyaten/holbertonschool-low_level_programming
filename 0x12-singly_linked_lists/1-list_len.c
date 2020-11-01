#include "lists.h"
#include <stdio.h>
/**
 * list_len - length of a list
 *
 *@h: list
 *
 *Return: length
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
