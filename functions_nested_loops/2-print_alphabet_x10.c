#include "main.h"

/**
 * print_alphabet_x10 - calls _putchar
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

}
