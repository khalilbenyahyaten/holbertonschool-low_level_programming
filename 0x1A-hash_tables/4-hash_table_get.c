#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key
 *
 *@ht: hash table
 *@key: key
 *
 *Return: value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *n;

if (!ht || !key)
return (NULL);
i = key_index((const unsigned char *)key, ht->size);
n = ht->array[i];
while (n)
{
if(strcmp(n->key, key) == 0)
{
return (n->value);
}
n = n->next;
}
return (NULL);
}
