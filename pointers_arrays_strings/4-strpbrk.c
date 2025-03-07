#include "main.h"

/**
 * _strpbrk - finds characters that match in both strings
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: returns a pointer to the characters that match, else returns NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int sCount = 0;
	int aCount = 0;

	for (sCount = 0; s[sCount] != '\0'; sCount++)
	{
		for (aCount = 0; accept[aCount] != '\0'; aCount++)
		{
			if (s[sCount] == accept[aCount])
				return (s + sCount);
		}
	}
	return (0);
}
