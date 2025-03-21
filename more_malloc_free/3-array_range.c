#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum size
 * @max: the maximum size
 * Return: NULL if min > max, NULL if malloc fails,
 * otherwise a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array = 0;
	int counter = 0;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	counter = (max - min) + 1;

	array = malloc(sizeof(int) * counter);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < counter; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
