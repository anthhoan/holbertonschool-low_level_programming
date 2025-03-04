#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: stores the given string
 * return: char
 */

char *cap_string(char *s)
{
	int array = 0;
	
	while (s[array] != '\0')
	{
	if (s[array] >= 'a' && s[array] <= 'z')
	{
		if (s[array] == ' ' || '	' || 10 || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
		s[array + 1] -= 32;
	}
	array++;
	}
	return (s);
}
