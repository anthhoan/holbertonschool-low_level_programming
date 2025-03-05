#include "main.h"

/**
 * _strncat - concatenates two strings up to a specified number of bytes.
 * @dest: Pointer to the destination string buffer
 * @src: Pointer to the source string buffer
 * @n: maximum number of bytes to be appended from @src
 * Description:
 * Step 1: Count the length of dest
 * Step 2: Use a loop to copy characters from src to dest
 * (up to n, not exceeding src length)
 * Step 3: Be sure to null-terminate dest at the new length
 * Return: Pointer to the resulting string of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destCount = 0;
	int sndArray = 0;

	while (dest[destCount] != '\0')
	{
		destCount++;
	}
	while (sndArray < n && src[sndArray] != '\0')
	{
		dest[destCount] = src[sndArray];
		destCount++;
		sndArray++;
	}
	dest[destCount] = '\0';
	return (dest);
}
