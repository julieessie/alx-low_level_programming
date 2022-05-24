#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h);
{
int num_elements = 0;

while (h)
{

h = h->next;
num_elements++;
}
return (num_elements);
}
