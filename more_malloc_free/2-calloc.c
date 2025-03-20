#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: the size of the array. number of memory bytes
 * @size: the size of a character
 * Return: if nmemb or size is 0 return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int *totalArray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalArray = malloc(nmemb * size);

	if (totalArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; totalArray[i] < nmemb - 1; i++)
	{
		totalArray[i] = 0;
	}
	return (totalArray);
}
