#include "main.h"

/** puts_half - calls upon the puts_half function
 * @str: holds the string
 * return: void
 */

void puts_half(char *str)
{
	int stringLength;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	
	stringLength = n;
	
	n = (stringLength + 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
