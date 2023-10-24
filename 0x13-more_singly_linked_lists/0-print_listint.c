#include "lists.h"

/**
 * print_listint - print all integers in list
 *
 * @h: the head pointer to the list
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int a;

	if (h == NULL)
	{
		return (0);
	}

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
