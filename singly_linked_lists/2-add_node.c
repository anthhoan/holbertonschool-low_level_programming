#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning
 * @head: a pointer to list_t
 * @str: the string to add at the beginning
 * Return: the address of the new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i = 0;

	if (str== NULL)
		return (NULL);
	/* allocates memory of list_t = str, len and next */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	/* duplicate string */
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/* gets the length of newNode */
	while (newNode->str[i] != '\0')
	{
		i++;
	}
	newNode->len = i;
	/* newNode points to current head */
	newNode->next = *head;
	/* update the head to the new node */
	*head = newNode;

	return(newNode);
}
