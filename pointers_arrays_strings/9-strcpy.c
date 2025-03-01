#include "main.h"

/**
 * _strcpy - calls upon the strcpy function
 * @src: stores the string we need to copy
 * @dest: takes the string from src and prints
 * return: the pointer to dest
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
