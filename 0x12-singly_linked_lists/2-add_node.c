#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the address of head
 * @str: pointer to the string of new nodes added
 * Return: address to the new head node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int len = 0;

new_node = malloc(sizeof(list_t));

if (!new_node)
return (NULL);

while (str[len])
len++;

new_node->str = strdup(str);
new_node->len = len;
new_node->next = (*head);
(*head) = new_node;

return (*head);
}
