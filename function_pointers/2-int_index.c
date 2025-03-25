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
	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);


