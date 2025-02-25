#include "main.h"

/**
 * print_square - prints a hashtag
 *
 * return: returns rows and hastags
 */

void print_square(int size)
{
	int row = 0;
	int hash;

	while (row < size)
	{
		hash = 0;

		while (hash < size)
		{
			_putchar(35);
			hash++;
		}
		_putchar('\n');
		row++;
	}
	if (size < 0)
	{
		_putchar('\n');
	}
}
