#include "lists.h"
/**
 * dlistint_len - length of a list
 *
 *@h: list
 *
 *Return: length
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
