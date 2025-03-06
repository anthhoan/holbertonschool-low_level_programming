#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string of characters to match s
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int sCount = 0;
	int aCount = 0;
	int match = 0;

	while (s[sCount] != '\0')
	{
		aCount = 0;
		match = 0;

		while (accept[aCount] != '\0')
		{
			if (s[sCount] == accept[aCount])
			{
			match = 1;
			length++;
			}
			aCount++;

		}	
		
		if (match == 0)
		{
			return (length);
		}

		sCount++;
	}
	return (length);
}
