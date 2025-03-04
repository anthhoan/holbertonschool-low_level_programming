#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string array
 * Return: char
 */

char *string_toupper(char *s)
{
	int array = 0;

	while (s[array] != '\0')
	{
	if (s[array] >= 'a' && s[array] <= 'z')
	{
		s[array] = s[array] - 32;
	}
	array++;
	}
	return (s);
}
