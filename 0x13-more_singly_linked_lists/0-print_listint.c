#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints list of integers
 *
 *@h: list
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int i;

i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
