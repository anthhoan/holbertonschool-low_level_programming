#include "main.h"

/**
 * _strcmp - compares two stings
 * if s1 and s2 are equal 0
 * if s1 is less than s2 negative value
 * is s1 is greater than s2 positive value
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: the difference between the two integers
 */

int _strcmp(char *s1, char *s2)
{
	int wordCount1 = 0;
	int wordCount2 = 0;

	while (s1[wordCount1] != '\0' && s2[wordCount2] != '\0')
	{
		wordCount1++;
		wordCount2++;
	}
	return (*s1 - *s2);
}
