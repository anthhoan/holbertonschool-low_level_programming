#include "main.h"

/**
 * print_line - calls for print_line function
 * @n: is the number of times the character _ is printed
 * Return: a line with _
 */

void print_line(int n)
{
	int a;

	for (a = 0 ; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
