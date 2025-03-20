#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory of an array
 * @nmemb: the size of the array. number of memory bytes
 * @size: the size of a character
 * Return: if nmemb or size is 0 return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *totalArray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalArray = malloc(nmemb * size);

	if (totalArray == NULL)
	{
		return (NULL);
	}

	while (i < nmemb * size)
	{
		totalArray[i] = 0;
		i++;
	}
	/*for (i = 0; i < nmemb * size; i++)
	{
		totalArray[i] = 0;
	}*/

	return (totalArray);
}
