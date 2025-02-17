#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu bytes\n", sizeof(unsigned char));
printf("Size of an int: %lu bytes\n", sizeof(unsigned int));
printf("Size of a long int: %lu bytes\n", sizeof(unsigned long int));
printf("Size of a long long int: %lu bytes\n", sizeof(unsigned long long int));
printf("Size of a float: %lu bytes\n", sizeof(float));
return (0);
}
