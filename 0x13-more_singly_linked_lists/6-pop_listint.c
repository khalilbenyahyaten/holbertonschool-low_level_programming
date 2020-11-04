#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes head of list
 *
 *@head: head of list
 *
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *ten;
int n;

if (*head == NULL)
return (0);
n = (*head)->n;
ten = (*head)->next;
free(*head);
*head = ten;
return (n);
}
