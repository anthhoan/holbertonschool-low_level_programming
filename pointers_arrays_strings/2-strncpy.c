#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: A pointer to the destination array where the
 * content is to be copied
 * @src: A pointer to the source string to be copied
 * @n: the number of characters to be copied
 *
 * Return: src copied to the end of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srcCount = 0;
	int destCount = 0;

	while (src[srcCount] != '\0' && srcCount < n)
	{
		dest[destCount] = src[srcCount];
		destCount++;
		srcCount++;
	}
	if (destCount < n && destCount != n)
	{
		dest[destCount] = '\0';
	}
	return (dest);
}
