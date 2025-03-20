#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b: unsigned interger being inputed
 * Return: the pointer to malloc
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
