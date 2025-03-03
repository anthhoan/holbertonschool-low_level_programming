#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @src: source 1 of the string
 * @dest: source 2 of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int startPosition;

	while (dest[count] != '\0')
	{					/** dest[count] is not NULL increment count until it reaches NULL */
		count++
	}

	startPosition = count;			/** count is now NULL, which we will assign to another variable */

	count = 0;				/** reset count to 0 */

	while (dest[startPosition + count] 
