#include "main.h"

/**
 * _strchr - locates a character in a string then prints out the remainder
 * @s: a pointer ti the string to be searched
 * @c: the character to be located
 * Return: the character 'c' in the string or s if null
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (s + count);
		}
		if (c == '\0')
		{
			return (s + count);
		}
		count++;
	}
	return (0);
}
