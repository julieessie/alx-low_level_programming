#include "lists.h"
/**
 * *insert_dnodeint_at_index - function inserts new node at given position
 *
 *@h: pointer to pointer of head of linked list
 *@idx: unsigned int index position
 *@n: int data
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t temp;
dlistint_t *newnode;

while (*h)
{
newnode = malloc(sizeof(dlistint_t));
temp = *h;
newnode->n = n;

if (idx == 0)
{
newnode->next = NULL;
return (newnode);
}
while (temp->next != NULL && idx - 1 > 0)
{
temp = temp->next;
idx--;
}
if (temp->next == NULL)
{
free(newnode);
return (NULL);
}
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
return (NULL);
}
