#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string then prints out the remainder
 * @s: a pointer ti the string to be searched
 * @c: the character to be located
 * Return: the character 'c' in the string or s if null
 */

char *_strchr(char *s, char c)
{
	int array = 0;

	while (s[array] != '\0')
	{
		if (s[array] == c)
		{
			return (s + array);
		}
		if (c == '\0')
		{
			return (s);
		}
		array++;
	}
	return (NULL);
}
