#include "main.h"

/**
 * *_strcpy - Copies a string
 * @src: holds the string
 * @dest: destination of the string we want to copy to
 * Description: Copies a string to a new location
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*start = *src;
		start++;
		src++;
	}
	*start = '\0';
	return (dest);
}
