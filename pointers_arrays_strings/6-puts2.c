#include "main.h"

/**
 * puts2 - calls upon the puts2 function
 * @str: holds the string
 * return: void
 */

void puts2(char *str)
{
	while (*str > '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
