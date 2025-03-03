#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @src: source 1 of the string
 * @dest: source 2 of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
