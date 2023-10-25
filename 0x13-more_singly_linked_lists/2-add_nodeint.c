#include "lists.h"

/**
 * add_nodeint - function that adds a new ndoe
 *
 * @n: value to be added to newnode
 * @head: pointer to the first node
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (head == NULL)
	{
		newnode->next = NULL;
	}

	else
	{
		newnode->next = *head;
	}
	*head = newnode;
	return (newnode);
}
