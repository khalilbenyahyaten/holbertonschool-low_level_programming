#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 *
 *@size: size of the array
 *
 *Return: null or hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *ht;

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(ht->array) * size);
if (ht->array == NULL)
{
return (NULL);
}
return (ht);
}
