#include "main.h"

/**
 * more_numbers - call the more_numbers function
 * Description: Print the numbers 0 to 14 ten times
 * Return: 0 to 14 10 times
 */

void more_numbers(void)
{
	int r, n;

	for (r = 0; r < 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
	_putchar('\n');
	}
}
