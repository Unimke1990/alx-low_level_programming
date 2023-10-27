#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *temp;
unsigned int i;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

if ((head == NULL) || (*head == NULL))
{
return (NULL);
}

new_node->n = n;
temp = *head;
for (i = 0; i < idx; i++)
{
temp = temp->next;
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
