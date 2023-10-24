#include "lists.h"

/**
 * listint_len - returns the elements in list
 *
 * @h: the head pointer to the list
 * Return: return the number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int b;

	if (h == NULL)
	{
		return (0);
	}

	for (b = 0; h != NULL; b++)
	{;
		h = h->next;
	}
	return (b);
}
