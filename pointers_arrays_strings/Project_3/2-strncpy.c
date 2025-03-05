#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: A pointer to the destination array where the
 * content is to be copied
 * @src: A pointer to the source string to be copied
 * @n: the number of maximum characters to be copied
 *
 * Return: src copied to the end of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
