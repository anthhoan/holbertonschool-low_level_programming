#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: what we will be counting in the program
 * @argv: void, not being used in this program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1); /** the program name is not included */

	return (0);
}
