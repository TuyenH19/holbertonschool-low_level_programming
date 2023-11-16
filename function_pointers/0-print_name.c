#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: pointer to a function that prints a name
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
