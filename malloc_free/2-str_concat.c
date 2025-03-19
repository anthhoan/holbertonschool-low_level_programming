#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int count = 0;
	int length1 = 0;
	int length2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	else
	{
		for (count = 0; s1[count] != '\0'; count++)
			length1++;
	}

	count = 0;

	if (s2 == NULL)
		s2 = "";
	else
	{
		for (count = 0; s2[count] != '\0'; count++)
			length2++;
	}

	result = malloc(sizeof(char) * (length1 + length2 + 1));
		if (result == NULL)
			return (NULL);

	count = 0;

	for (count = 0; count < length1; count++)
	{
		result[count] = s1[count];
	}

	for (count = 0; count < length2; count++)
	{
		result[length1 + count] = s2[count];
	}
	result[length1 + length2] = '\0';
	return (result);
}
