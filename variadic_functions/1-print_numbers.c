#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: unsigned int number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* always declare va_list */
	va_list args;
	unsigned int i = 0; /* counter to iterate */

	va_start(args, n);
	/* check if n is 0 */
	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator); /* separator is a string */
		}
		printf("%d", va_arg(args, int));
	}
	printf("\n");

	va_end(args);
}
