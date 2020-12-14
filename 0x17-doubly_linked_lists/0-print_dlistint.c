#include "lists.h"
/**
 * print_dlistint - print the number of element of a list
 *
 *@h: list
 *
 *Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{

int i = 0;

while (h != NULL)
{
printf("%d",h->n);
h = h->next;
i++;
}
return(i);
}
