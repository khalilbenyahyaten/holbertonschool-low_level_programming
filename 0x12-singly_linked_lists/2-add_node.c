#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node at the begining of a list
 *
 *@head: list
 *@str: string
 *
 *Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *ten;
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
ten->next = *head;
*head = ten;
return (*head);
}
