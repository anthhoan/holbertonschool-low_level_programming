#include "main.h"
#include <stdio.h>

/**
 * print_triangle - calls forth the function print_triangle
 * @size: the size of the triangle
 * return: triangle
 */

void print_triangle(int size)
{
	int row = 0;
	int space_count = 0;
	int hash_count = 0;

	if (size > 0)
	{
		while (row < size)
		{
			hash_count = 0;
			space_count = 0;
			while (hash_count < (row + 1))
			{
				while (space_count < (size - (row + 1)))
				{
					_putchar(' ');
					space_count++;
				}
				_putchar('#');
				hash_count++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
