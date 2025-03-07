#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring to be seached in main string
 * Return: pointer to the beginning of the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int hsCounter = 0;
	int nCounter = 0;

	for (hsCounter = 0; haystack[hsCounter] != '\0'; hsCounter++)
	{
		if (haystack[hsCounter] == needle[nCounter])
		{
			for (nCounter = 0; needle[nCounter] != '\0'; nCounter++)
			{
				if (haystack[hsCounter + nCounter] != needle[nCounter])
					break;
				if (needle[nCounter + 1] == '\0')
				{
					return (haystack + hsCounter);
				}
			}
		}
	}
	return (0);
}
