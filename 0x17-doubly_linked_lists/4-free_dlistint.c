#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 *
 *@head: list
 *
 *Return: void
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *fr, *ten;
ten = head;
while (ten != NULL)
{
fr = ten->next;
free(ten);
ten = fr;
}
}
