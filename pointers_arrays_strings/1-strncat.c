#include "main.h"

/**
 * *_strncat - similar to strcat except that, it will use at most n bytes from src and src does not need to be null if n contains more bytes
 * @dest: source of 1st string
 * @src: source of 2nd string
 * @n: contains bytes from src
 * return: dest
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

/**:
 * Step 1: Count the length of dest
 * Step 2: Use a loop to copy characters from src to dest (up to n, not exceeding src length)
 * Step 3: Be sure to null-terminate dest at the new length
 */
