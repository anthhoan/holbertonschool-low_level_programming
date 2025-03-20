#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first set of string
 * @s2: the second set of string
 * @n: unsigned int
 * Return: finalConcat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count = 0;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *finalConcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count] != '\0'; count++)
		length1++;

	count = 0;

	for (count = 0; s2[count] != '\0'; count++)
		length2++;

	finalConcat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (finalConcat == NULL)
	{
		return (NULL);
	}
	
	if (n > length2)
		n = length2;

	count = 0;

	for (count = 0; count < length1; count++)
		finalConcat[count] = s1[count];

	for (count = 0; count < n; count++)
	{
		finalConcat[length1 + count] = s2[count];
	}
	finalConcat[length1 + n] = '\0';
	return (finalConcat);
}
