#include "main.h"

/**
 * print_rev - calls upon the print_rev function
 * @s: holds the string of text
 * return: void
 */

void print_rev(char *s)
{
	int stringLgnth = 0;

	while (s[stringLgnth] != '\0')
	{
		stringLgnth++;
	}

	while (stringLgnth >= 0 - 1)
	{
		_putchar(s[stringLgnth]);
		stringLgnth--;
	}
	_putchar('\n');
}
