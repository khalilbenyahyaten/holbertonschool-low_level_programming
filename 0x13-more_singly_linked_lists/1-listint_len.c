#include "lists.h"
#include <stdio.h>
/**
 * listint_len - length of a list
 *
 *@h: list
 *
 *Return: length of list h
 */
size_t listint_len(const listint_t *h)
{
unsigned int i;

i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
