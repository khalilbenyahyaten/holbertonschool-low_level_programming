#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 *
 *@head:list
 *
 *Return: void
 */
void free_list(list_t *head)
{

while (head != NULL)
{
free(head->str);
head = head->next;
}
free(head);
return;
}
