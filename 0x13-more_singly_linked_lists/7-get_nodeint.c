#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - gets the node at index
 *
 *@index: index of node to get
 *@head: list
 *
 *Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0, j = 0;
listint_t *ten, *a;

if (head == NULL)
return (NULL);
a = head;
while (head != NULL)
{
a = a->next;
i++;
}
if (i < index)
return (NULL);
ten = head;
while (j < index)
{
ten = ten->next;
if (ten == NULL)
{
return (NULL);
}
j++;
}
return (ten);
}
