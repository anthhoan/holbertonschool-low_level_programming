#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: void, not being used in this program
 * @argv: argv0 being the program name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
