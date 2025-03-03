#include "main.h"

/**
 * _puts - calls upon the _puts function
 * @str: holds the string of text
 * return: the string of text
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
