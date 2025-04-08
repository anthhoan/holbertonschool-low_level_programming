#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list
 * @head: a pointer to a list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *currentNode = head;

	while (currentNode != NULL)
	{
	/* save next node */
		list_t *nextNode = currentNode->next;
	/* frees the string */
		free(currentNode->str);
	/* free current node */
		free(currentNode);
	/* move to the next node */
		currentNode = nextNode;
	}
}
