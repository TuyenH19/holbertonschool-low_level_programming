#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print number with separator
 * @separator: string between numbers
 * @n: number of integers
 * ...: variable number of parameters
 *
 * Returns: numbers with separators
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (!separator)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
