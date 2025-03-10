#include "main.h"

/**
 * helper - Helper function for _sqrt_recursion
 * @n: squared number
 * @baseNumber: base number
 * Return: if n does not have a natural square root, return -1
 * otherwise return a integer
 */

int helper(int n, int baseNumber)
{
	if (baseNumber * baseNumber > n)
		return (-1);
	if (baseNumber * baseNumber == n)
		return (baseNumber);

	return (helper(n, baseNumber + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 * Return: if n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 0));
}
