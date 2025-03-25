#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array to search through
 * @size: the size of the array
 * @cmp: the function pointer to use
 * Return: the number that matches, if no matches return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
	}
	return (-1);
}
