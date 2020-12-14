#include "lists.h"
/**
 * *add_dnodeint - adds a node a the start of a list
 *
 *@head: list
 *@n: int
 *
 *Return: adress of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->next = *head;
new->prev = NULL;
new->n = n;
*head = new;
if (*head != NULL)
{
return (*head);
}
else
{
return (NULL);
}
}
