#include "main.h"

/**
 * print_diagonal - calls forth the print_diagonal function
 * @n: prints spaces
 * return: a number of spaces before \
 */
void print_diagonal(int n)
{
	int row = 1;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row <= n)
		{
			space = 1;

			while (space <= row)
			{
				_putchar(' ');
				space++;
			}
		_putchar('\\');
		_putchar('\n');
		row++;
		}
	}
}
