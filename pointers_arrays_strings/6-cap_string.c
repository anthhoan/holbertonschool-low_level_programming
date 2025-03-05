#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: stores the given string
 * return: char
 */

char *cap_string(char *s)
{
	int count = 0;
	int capitalise = 1;
	
	while (s[count] != '\0')
	{
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n' || s[count] == ',' || s[count] == '.' || s[count] == '!' || s[count] == '?' || s[count] == '"' || s[count] == '(' || s[count] == ')' || s[count] == '{' || s[count] == '}' ||  s[count] == ';')
		{
			capitalise = 1;
		}
		else
		{
			if (capitalise == 1 && s[count] >= 'a' && s[count] <= 'z')
			{
				s[count] = s[count] - 32;
				capitalise = 0;
			}
			else
			{
				capitalise = 0;
			}
		}
		count++;
	}
	return (s);
}
