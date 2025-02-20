#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
