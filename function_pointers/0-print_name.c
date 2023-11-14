#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: pointer to a function taht prints a name
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
