#include "hash_tables.h"
/**
 * key_index - index of a key
 *
 *@key: key
 *@size: size of the array of the hash table
 *
 *Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int h, index;

h = hash_djb2(key);
index = h % size;
return (index);
}
