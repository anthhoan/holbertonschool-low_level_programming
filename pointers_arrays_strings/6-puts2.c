#include "main.h"

/**
 * puts2 - calls upon the puts2 function
 * @str: holds the string
 * return: void
 */

void puts2(char *str)
{
	while (*str < '\0')
	{
	if (*str % 2 == 1)
		continue;

	else if (*str % 2 == 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	}
}
