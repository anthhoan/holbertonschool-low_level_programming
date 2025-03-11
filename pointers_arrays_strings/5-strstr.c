#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring to be seached in main string
 * Return: pointer to the beginning of the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
