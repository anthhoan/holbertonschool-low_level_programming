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
	n = 0;

	while (a[n] != '\0')
	{
		printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
