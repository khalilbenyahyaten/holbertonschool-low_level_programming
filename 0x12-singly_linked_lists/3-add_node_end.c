#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds node at the end of the list
 *
 *@head: list
 *@str: string
 *
 *return: list
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
if (ten->str == NULL)
{
free(ten);
return (NULL);
}
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
