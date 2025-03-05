#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer to the block of memory to fill
 * @b: second parameter of type integer and converts it to unsigned char
 * before using it to full a block of memory
 * @n: the number of bytes to be set to the value
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int array = 0;

	if (n == 0)
	{
		return (s);
	}

	while (array < n)
	{
		s[array] = b;
		array++;
	}
	return (s);
}
