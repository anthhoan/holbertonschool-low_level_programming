#include "main.h"

/**
 * _pow_recursion - returns a value, raised to the power of a given number.
 * @x: the main value
 * @y: what the power is to
 * Return: if the power of is lower than 0, the function returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y ==  0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
