#include "main.h"

/**
 * print_last_digit - prints the last digit of a value
 * @v: represents the digit
 * Return: the last value
 */

int print_last_digit(int v)
{
	int lastDigit = v % 10;

	if (lastDigit < 0)
	{
		lastDigit = (-1) * lastDigit;
	}
	{
		_putchar('0' + lastDigit);
		return (lastDigit);
	}
}

