#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - to print a string followed by y new line
 * @separator: string to separate the others strings
 * @n: number of parameters
 *
 * Return: a string with n parameters and separators
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *current_string;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		current_string = va_arg(ap, char *);

		if (current_string)
			printf("%s", current_string);
		else
			printf("(nil)");

		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
