#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list
 * @h: a pointer to the dlistint_t
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		/* moves to the next node */
		h = h->next;
	}
	return (i);
}
