#include "main.h"
#include <stdio.h>

/**
 * print_array - calls upon the print_array function
 * @a: stores the array
 * @n: the number of elemets of the array to be printed
 * return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
