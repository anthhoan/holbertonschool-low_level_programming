#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{

		if (alphabet == 'e')
		{
			continue;
		}

		if (alphabet == 'q')
{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
