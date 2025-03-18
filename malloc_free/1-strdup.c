#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of a string to the given parameter
 * @str: the given string
 * Return: the pointer of the string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *array;
	int counter = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

	array = malloc(sizeof(char) * str[i] + 1);
	if (array == 0)
	{
	return (NULL);
	}

	for (counter = 0; counter < i; counter++)
	{
		array[counter] = str[counter];
	}
	return (array);
}
