#include "main.h"

/**
 * _strlen - calls on the _strlen function
 * @s: stores the value
 * Return: int
 */

int _strlen(char *s)
{
	int stringLgnth = 0;

	while (s[stringLgnth] != '\0')
	{
		stringLgnth++;
	}
	return (stringLgnth);
}
