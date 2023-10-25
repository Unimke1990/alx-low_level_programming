#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list
 *
 * @head: the pointer pointing to the end of the list
 * @n: value to be added to the new list
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;

(void)temp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}

new_node->n = n;

if (*head == NULL)
{
	*head = new_node;
}

temp = *head;

while (temp->next != NULL)
	{
	temp = temp->next;
	}

new_node->next = NULL;
temp->next = new_node;
return (new_node);
}
