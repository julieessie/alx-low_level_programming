#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add as node
 * Return: pointer to new element of list, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last;
unsigned int length = 0;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

while (str[length])
length++;

new_node->str = strdup(str);
new_node->len = len;

if (*head == NULL)
{
new_node->next = *head;
*head = new_node;
}
else
{
new_node->next = NULL;
last = *head;

while (last->next)
last = last->next;
last->next = new_node;
}
return (new_node);
}
