#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that calculates two given integers and the operator
 * @argc: number of arguments including the program name
 * @argv: the two number being printed and the operator
 * Return: the result of the 2 integers being added, subtracted, multiplied
 * divide or the remainder of the numbers divided.
 * Number of arguments wrong (98)
 * Operator is none of the above (99)
 * Divides/Modulo by 0 (100)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
