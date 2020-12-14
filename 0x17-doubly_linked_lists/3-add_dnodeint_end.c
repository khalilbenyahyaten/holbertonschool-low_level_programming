#include "lists.h"
/**
 * *add_dnodeint_end - adds node at the end of a list
 *
 *@head: pointer to head of list
 *@n: int
 *
 *Return: adress of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ten, *new;

ten = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
new->n = n;
*head = new;
return (new);
}
while (ten->next)
{
ten = ten->next;
}
ten->next = new;
new->next = NULL;
new->prev = ten;
new->n = n;
return (new);
}
