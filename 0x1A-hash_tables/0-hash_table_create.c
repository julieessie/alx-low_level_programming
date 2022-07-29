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
hash_table_t *ht;

if (size == 0)
return (NULL);

ht = malloc(sizeof(hash_table_t));
if (!ht)
return (NULL);

return (ht);
}
