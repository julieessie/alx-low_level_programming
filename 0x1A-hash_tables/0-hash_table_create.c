#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of an array.
 *
 * Return: a pointer to the newly created hash table.
 *         otherwise Null if it fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_p;
unsigned long int i;

if (size == 0)
return (NULL);
hash_p = malloc(sizeof(hash_table_t));
if (hash_p == NULL)
return (NULL);
hash_p->size = size;
hash_p->array = malloc(sizeof(hash_node_t *) * size);
if (hash_p->array == NULL)
{
free(hash_p);
return (NULL);
}
for (i = 0; i < size; i++)
hash_p->array[i] = NULL;
return (hash_p);
}
