#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments being passed
 * @n: number of arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	/* always declare va_list args; */
	va_list args;
	int total = 0;
	unsigned int i = 0; /* counter to iterate */

	/* initialize args to point to the first variable argument */
	va_start(args, n); /* n being the first */
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args); /* cleans up the va_list */
	return (total);
}
