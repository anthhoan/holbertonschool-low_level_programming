#include "main.h"

/** times_table - prints the times table
 *
 * Return: empty output
 */

void times_table(void)
{
	int firstDigit, secondDigit, result;

	for (firstDigit = 0; firstDigit < 10; firstDigit++)
	{
		for (secondDigit = 0; secondDigit < 10; secondDigit++)
		{
			result = firstDigit * secondDigit;

			if (secondDigit == 0)
				_putchar('0' + result);

			else if ( result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (secondDigit < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
