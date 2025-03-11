#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: the arguments being printed
 * Return: (0)
 */

int main(int argc, char *argv[])
{

	int arguments = 0;

	while (arguments < argc)
	{
		printf("%s\n", argv[arguments]);
		arguments++;
	}

	return (0);
}
