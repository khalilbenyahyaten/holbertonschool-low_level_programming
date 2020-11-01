#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints alla elements of a list
 *
 *@h: list
 *
 *Return: number of nodes of list h
 */
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
if ((*h).str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", (*h).len, (*h).str);
}
h = (*h).next;
i++;
}
return (i);
}
