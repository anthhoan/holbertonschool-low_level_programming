#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @src: source 1 of the string
 * @dest: source 2 of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int nulCount = 0;
	int sndArray = 0;

	while (dest[nulCount] != '\0')
	{
		nulCount++;
	}
	while (src[sndArray] != '\0')
	{
	dest[nulCount] = src[sndArray];
	nulCount++;
	sndArray++;
	}
	dest[nulCount] = '\0';
	return (dest);
}
