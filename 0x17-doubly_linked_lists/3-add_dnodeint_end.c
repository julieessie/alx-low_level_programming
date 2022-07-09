#include "lists.h"
/**
 * *add_dnodeint_end - function adds new node to end of list
 *
 *@head: pointer to pointer of head of linked list
 *@n: const int pointer
 *
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *newnode;
if (head == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

temp = *head;

if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
return (new_node);
}

while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = new_node;
new_node->prev = temp;

return (new_node);
}
