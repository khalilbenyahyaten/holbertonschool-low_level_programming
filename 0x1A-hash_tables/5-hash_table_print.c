#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 *
 *@ht: hash table
 *
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int x;

if (!ht)
return;
printf("{");
for (i = 0; i <= ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i])
{
if (x != 0)
{
printf(", ");
}
printf("'%s': '%s'",ht->array[i]->key, ht->array[i]->value);
x++;
ht->array[i] = ht->array[i]->next;
}
}
}
printf("}\n");
}
