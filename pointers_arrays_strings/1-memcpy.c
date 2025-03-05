#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to the desitination array where the content is to be copied
 * @src: used to define the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int array = 0;

	if (n == 0)
	{
		return (dest);
	}

	while (array < n)
	{
		dest[array] = src[array];
		array++;
	}
	return (dest);
}
