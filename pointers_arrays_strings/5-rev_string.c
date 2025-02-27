#include "main.h"

/**
 * rev_string - calls upon the rev_string function
 * @s: stores the string
 * return: void
 */

void rev_string(char *s)
{
	int stringLength = 0;
	char tmp, *ptr1, *ptr2;
	int i = 0;

	while (s[stringLength] != '\0')
	{
		stringLength++;
	}

	ptr1 = s;
	ptr2 = s + stringLength - 1;

	while (i < stringLength / 2)
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;

		ptr1++;
		ptr2--;
		i++;
	}
}
