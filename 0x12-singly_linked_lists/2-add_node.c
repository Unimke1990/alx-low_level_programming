#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node_new;
unsigned int a, count = 0;
node_new = malloc(sizeof(list_t));
if (node_new == NULL)
return (NULL);

node_new->str = strdup(str);
for (a = 0; str[a] != '\0'; a++)
count++;
node_new->len = count;
node_new->next = *head;
*head = node_new;

return (*head);

}

