#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int arrayCount = 0;
	int tmp;

	while (arrayCount < n)
	{
		tmp = a[arrayCount];
		a[arrayCount] = a[n - 1];
		a[n - 1] = tmp;

		n--;
		arrayCount++;
	}
}
