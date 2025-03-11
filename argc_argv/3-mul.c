#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that muliplies two numbers
 * @argc: number of argurments including the program name
 * @argv: the two numbers being printed
 * Return: 0 on success, return 1 on error
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3) /**
			* 3 becuase argc counts as 1 and its looking for
			* 2 more value inputs
			 */
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]); /**
						 * atoi - converts argument
						 * strings to integers
						 */
	printf("%d\n", result);

	return (0);
}
