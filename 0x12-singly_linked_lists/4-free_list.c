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
list_t *fr;

fr = head;
while (head != NULL)
{
fr = head;
free(fr->str);
head = head->next;
}
free(fr);
return;
}
