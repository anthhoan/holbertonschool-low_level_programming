#include "main.h"

/**
 * *_strcpy - copies a string
 * @src: stores the string we need to copy
 * @dest: takes the string from src and prints
 * return: char *
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
