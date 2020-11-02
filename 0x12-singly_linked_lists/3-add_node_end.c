#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ten, *a;
int i;

if (head == NULL)
return (NULL);
ten = malloc(sizeof(list_t));
if (ten == NULL)
return (NULL);
ten->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
{
}
ten->len = i;
ten->next = NULL;
if (*head == NULL)
{
*head = ten;
return (*head);
}
a = *head;
while (a->next != NULL)
a = a->next;
a->next = ten;
return (*head);
}
