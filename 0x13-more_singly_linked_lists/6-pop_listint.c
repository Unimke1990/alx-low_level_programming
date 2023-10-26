#include "lists.h"

/**
  * pop_listint - deletes the first node and
  * return its data
  * @head: pointer to the head of the list
  * Return: int
  */

int pop_listint(listint_t **head)

{
	int n;
	listint_t *new_node;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	new_node = *head;
	*head = (*head)->next;

	free(new_node);
	return (n);
}
