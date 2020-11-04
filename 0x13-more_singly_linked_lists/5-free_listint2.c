#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - sets head to NULL
 *
 *@head: list
 *
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *ten, *fr;

ten = *head;
while (head != NULL && ten != NULL)
{
fr = ten;
ten = ten->next;
free(fr);
}
*head = NULL;
return;
}
