#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char n;

	for (n = 0; n <10; n++)
	{
		putchar(n + '0');
	}
	
	putchar ('\n');
	return (0);
}
