#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints int to 98
 * @n: integer value
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
		else
		{
			for ( ; n > 98; n--)
		{
			printf("%d, ", n);
		}
		}
		printf("%d\n", n);
}
