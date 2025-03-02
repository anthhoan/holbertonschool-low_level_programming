#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: stores the integer of the string
 * return: int
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
			if (s[i] != '-' && s[i] != '+')
		{
		num = num * 10 + (s[i] - 48);
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (num);
}
