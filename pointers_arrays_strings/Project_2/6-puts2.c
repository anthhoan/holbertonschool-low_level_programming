#include "main.h"

/**
 * puts2 - calls upon the puts2 function
 * @str: holds the string
 * return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
