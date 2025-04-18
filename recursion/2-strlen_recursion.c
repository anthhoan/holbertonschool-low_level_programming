#include "main.h"

/**
 * _strlen_recursion - returns the length of a string reusrively
 * @s: a pointer to a string that we will count the length
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
