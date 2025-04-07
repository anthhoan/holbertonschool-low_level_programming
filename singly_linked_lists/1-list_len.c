#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: singly linked list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;
	/* 'h' here implicitly means 'h != NULL' */
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
