#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - A function that frees a hash table.
 * @ht: The pointer to hash table to delete.
 *Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *next_node = NULL, *tmp = NULL;

if (!ht)
return;

if (ht->array)
{
for (i = 0; i < ht->size; i++)
{
if (ht->array[i])
{
tmp = ht->array[i];
while (tmp)
{
next_node = tmp->next;
if (tmp->value)
free(tmp->value);
if (tmp->key)
free(tmp->key);
free(tmp);
tmp = next_node;
}
}
}
free(ht->array);
}
free(ht);
}
