#include "main.h"

/**
 * leet - encodes a string into 1337
 * @string: string
 * Return: s
 */

char *leet(char *string)
{
	int count1 = 0;
	int count2;
	char alphabet[] = "aAeEoOtTlL";
	char replaceWith[] = "4433007711";

	while (string[count1] != '\0')
	{
		count2 = 0;

		while (alphabet[count2] != '\0')
		{
			if (string[count1] == alphabet[count2])
			{
				string[count1] = replaceWith[count2];
			}
			count2++;
		}
		count1++;
	}
	return (string);
}
