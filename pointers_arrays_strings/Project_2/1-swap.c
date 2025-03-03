#include "main.h"

/**
 * swap_int - calls on the function
 * @a: value of first integer
 * @b: value of second integer
 * return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
