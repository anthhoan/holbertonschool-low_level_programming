#include <stdio.h>

/**
 * print_signL prints numbers
 * @n: The number to be checked
 * Return: will return + or -
 */

int print_sign(int n)
{
	if (n > 0)
		{
			putchar(43);
			return (1);
		}
		else
			if (n < 0)
			{
				putchar(45);
				return (-1);
			}
			else
			{
				putchar(48);
				return (0);
			}
}
