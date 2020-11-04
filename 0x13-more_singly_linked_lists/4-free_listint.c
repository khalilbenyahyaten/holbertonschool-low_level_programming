#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a list of integers
 *
 *@head: list
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *fr;

while (head != NULL)
{
fr = head;
fr->n = 0;
head = head->next;
free(fr);
}
return;
}
