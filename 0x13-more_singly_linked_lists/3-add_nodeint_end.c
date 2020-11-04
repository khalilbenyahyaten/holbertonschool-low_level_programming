#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds node at the end of the list
 *
 *@head: list
 *@n: integer
 *
 *Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ten, *a;

if (head == NULL)
return (NULL);
ten = malloc(sizeof(listint_t));
if (ten == NULL)
return (NULL);
ten->n = n;
ten->next = NULL;
if (*head == NULL)
{
*head = ten;
return (*head);
}
a = *head;
while (a->next != NULL)
{
a = a->next;
}
a->next = ten;
return (*head);
}
