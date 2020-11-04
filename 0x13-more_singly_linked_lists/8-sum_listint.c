#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - calculates the sum of all the data in an integer list
 *
 *@head: list
 *
 *Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ten;

if (head == NULL)
return (0);
ten = head;
if (ten == NULL)
return (0);
while (ten != NULL)
{
sum += ten->n;
ten = ten->next;
}
return (sum);
}
