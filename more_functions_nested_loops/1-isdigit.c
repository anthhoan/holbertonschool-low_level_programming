#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: value to be indentified
 * Return: 1 if c is a digit; otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
