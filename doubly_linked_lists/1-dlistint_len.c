#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: a pointer to a dlistint_t
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
