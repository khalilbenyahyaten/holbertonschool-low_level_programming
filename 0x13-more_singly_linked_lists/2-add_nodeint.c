#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at the begining of the list
 *
 *@h: list
 *@n: integer
 *
 *Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ten;

if (head == NULL)
return (NULL);
ten = malloc(sizeof(listint_t));
if (ten == NULL)
return (NULL);
ten->n = n;
ten->next = *head;
*head = ten;
return (*head);
}
