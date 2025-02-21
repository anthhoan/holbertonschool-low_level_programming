#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be verified
 * Return: returns a value of 0 or 1
 */
int _islower(int c)
{
	if(c <= 'a' && c >= 'z')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
