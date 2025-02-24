#include "main.h"

/**
 * print_diagonal - calls forth the print_diagonal function
 * @n: prints spaces
 * return: a number of spaces before \
 */
void print_diagonal(int n)
{
	int row = 0;
	int space;

	while (row < n)
	{
		space = 0;

		while (space < row)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
