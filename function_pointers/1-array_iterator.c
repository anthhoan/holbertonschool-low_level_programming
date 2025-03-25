#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - excecutes a function given as a parameter on each
 * element of an array
 * @array: array to iterate through
 * @size: size of the array
 * @action: the pointer to the function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter = 0;

	if (array == NULL)
		return;

	if (size <= 0)
		return;

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
