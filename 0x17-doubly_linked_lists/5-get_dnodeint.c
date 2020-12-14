#include "lists.h"
/**
 * *get_dnodeint_at_index - gets the node at index
 *
 *@head: list
 *@index: index
 *
 *Return: node at index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (i < index && head->next)
{
head = head->next;
i++;
}
if (i < index)
return (NULL);
return (head);
}
