#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: represents the abosulute value
 * Return: the distance the value is from 0
 */

int _abs(int r)
{
	if (r < 0)
	{
		int abs_val;

		abs_val = r * (-1);

		return (abs_val);
	}
	{
		return (r);
	}
}
