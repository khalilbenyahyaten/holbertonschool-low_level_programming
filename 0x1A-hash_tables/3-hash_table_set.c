#include "hash_tables.h"
/**
 *hash_table_set - add element to the hash table
 *
 *@ht :  hash table
 *@key: key
 *@value: the value associated with the key.
 *
 *Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *new, *location;
if (!ht || !key || !value)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
location = ht->array[idx];
while (location != NULL)
{
if (strcmp(location->key, key) == 0)
{
location->value = strdup(value);
return (1);
}
location = location->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);
new->next = ht->array[idx];
ht->array[idx] = new;
return (1);
}
