#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: const list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	/* size_t = unsigned integer */
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		/* move to the next node in the list */
		h = h->next;
	}
	return (i);
}
