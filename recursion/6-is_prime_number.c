#include "main.h"

/**
 * check_if_prime - checks if the number inputted is a prime number
 * @n: the number to be checked
 * @i: checks if n is divisible by i
 * Return: a prime number
 */

int check_if_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_if_prime(n, i + 1));
}

/**
 * is_prime_number - checks if input number is a prime number
 * @n: the number inputted
 * Return: a 1 if the input is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_if_prime(n, 2));
}
