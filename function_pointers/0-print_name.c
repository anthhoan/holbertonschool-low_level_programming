#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: String that contains the name
 * @f: function to print the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
