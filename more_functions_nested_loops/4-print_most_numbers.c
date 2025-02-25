#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 *
 * Return: numbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int a = 0;
	int b = 9;
	int number;

	while (a <= b)
	{
		if (a == 2)
			a++;
		else if (a == 4)
			a++;
		else 
		{
		printf("%d" , a);
		a++;
		}
	}
	printf("\n");
}
